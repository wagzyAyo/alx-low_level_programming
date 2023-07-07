#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int b, counter = 0;
	unsigned long int active;

	for (b = 63; b >= 0; b--)
	{
		active = n >> b;

		if (active & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
		}
	if (!counter)
		_putchar('0');
}
