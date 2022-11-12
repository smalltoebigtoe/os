; bootloader.asm

org 0x7c00
bits 16
start: jmp boot

;; constant and variable defines
msd db "my shitty os", 0ah, 0dh, 0h

boot:
  cli
  cld
  hlt

times 510 - ($-$$) db 0
dw 0xAA55
