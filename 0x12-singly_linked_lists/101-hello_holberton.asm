section  .text
   global main
   extern printf
main:
  mov edi , format
  xor eax, eax
  mov ecx , msg
  call printf
  mov eax, 0
  ret
format: db `Hello, Holberton`,10
