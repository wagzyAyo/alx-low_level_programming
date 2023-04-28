section  .text
   global_start
   extern printf
_start:
  mov edi , len
  xor eax, eax
  mov ecx , msg
  call printf
  mov eax, 0
  ret
msg: db `Hello, Holberton`,0XA , 0
len equ $ -msg
