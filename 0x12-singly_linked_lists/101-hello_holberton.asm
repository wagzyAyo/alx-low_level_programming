section  .text
   global_start
   extern printf
_start:
  mov edx , len
  mov ecx , msg
  call printf
  mov eax, 1
  ret
msg: db "Hello, Holberton",10
len equ $ -msg
