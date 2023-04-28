section .text
      global_start
_start:
         mov edx , len
         mov exc , msg
         mov ebx ,1
         mov eax , 4 ;system call
         int 0x80 ;To call kernel
         mov eax , 1 ;Sysytem call
         int 0x080
section .data
   msg db "Hello, Holberton",10
   len equ $ -msg
