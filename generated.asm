section .data
  printf_format: db '%d', 10, 0
extern printf
global main
section .text
main:
  push 0
loop0:
  push QWORD [rsp + 0]
  pop rax
  push rax
  mov rbx, 101
  push rbx
  pop rbx
  pop rax
  cmp rax, rbx
  je label0
  push QWORD [rsp + 0]
  mov rdi, printf_format
  pop rsi
  xor rax, rax
  call printf WRT ..plt
  push QWORD [rsp + 0]
  pop rax
  push rax
  pop rax
  mov rbx, 1
  add rax, rbx
  push rax
  pop rax
  mov QWORD [rsp + 4294967288], rax
  push QWORD [rsp + 4294967288]
 jmp loop0
label0:
  mov rax, 0
  push rax
  mov rax, 60
  pop rdi
  syscall
