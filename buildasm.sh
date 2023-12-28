nasm -f elf64 test.asm -o generated.o
ld generated.o -o generated
