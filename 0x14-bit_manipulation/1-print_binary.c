#include "main.h"
/**
 *print_binary - prints binary representation of numbers
 *@n : unsigned long integer
 *yy
 **/
void print_binary(unsigned long int n)
{
	int b, numb = 0;
	unsigned long int move;

	for (b = 63; b >= 0; b--)
	{
		move = n >> b;
		if (move & 1)
		{
			numb++;
			_putchar ('1');
		}
		else if (numb)
			_putchar ('0');
	}
	if (!num)
	_putchar ('0');
}
