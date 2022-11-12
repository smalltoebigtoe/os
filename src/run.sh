# compile and write to disk image
nasm -f bin bootloader.asm -o bootloader

# create 1.4MB floppy disk
dd if=/dev/zero of=disk.img bs=512 count=2880

# write bootloader to 1st section
dd conv=notrunc if=bootloader of=disk.img bs=512 count=1 seek=0

# conv=notrunc preserves original size of floppy disk

