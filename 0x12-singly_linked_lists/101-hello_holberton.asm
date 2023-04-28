section  .text
   global_start
   extern printf
_start:
  mov edi , len
  mov ecx , msg
  call printf
  mov eax, 1
  ret
msg: db `Hello, Holberton`,0XA , 0
len equ $ -msg
