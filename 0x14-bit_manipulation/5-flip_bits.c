#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter = 0;
	unsigned long int active;
	unsigned long int exc = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exc >> i;
		if (active & 1)
			counter++;
	}

	return (counter);
}
