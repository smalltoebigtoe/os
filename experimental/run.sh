nasm boot.asm -f bin -o boot.bin

dd if=/dev/zero of=floppy.img bs=1024 count=1440
dd if=boot.bin of=floppy.img seek=0 count=1 conv=notrunc

if [ -d "iso/" ]
then
	echo "removing iso/ folder"
	rm -drf iso/
fi

mkdir iso
cp floppy.img iso/
genisoimage -quiet -V 'MYOS' -input-charset iso8859-1 -o os.iso -b floppy.img \
	-hide floppy.img iso/

qemu-system-x86_64 -cdrom ./os.iso

rm -f boot.bin
rm -drf iso/
rm -f floppy.img

