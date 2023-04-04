#include "main.h"
/**
* _memset -will  fill a block of memory with a specific value
* @s: starting address of memory to be filled
* @b: the desired value
* @n:byte of memory area appointed
*
* Return: changed array with new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
int j = 0;
for (; n > 0; j++)
{
s[j] = b;
n--;
}
return (s);
}
