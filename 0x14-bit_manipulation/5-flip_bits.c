#include "main.h"
/**
 * flip_bits - Number of bits to flip to get to ne bit to another
 * @n :first number
 * @m: second number
 *
 * Return:number of bits
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, numb = 0;
	unsigned long int t;
	unsigned long int operation = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		t = operation >> a;
		if (t & 1)
			numb++;
	}

	return (numb);
}
