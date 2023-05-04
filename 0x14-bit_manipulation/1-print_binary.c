#include "main.h"
/**
 *print_binary - prints binary representation of numbers
 *@n : unsigned long integer
 *yy
 **/
void print_binary(unsigned long int n)
{
	int b, numb = 0;
	unsigned long int long_int;

	for (b = 63 ; b >= 0; b--)
	{
		numb = n >> b;

		if (long_int & 1)
		{
			 numb++;
			_putchar('1');
		}
		else if (numb)
			_putchar('0');
	}
if (!numb)
_putchar('0');
}
