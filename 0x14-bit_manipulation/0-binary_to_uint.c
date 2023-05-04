#include "main.h"
/**
 * binary_to_uint - converts binary to unsined integer
 * @b: pointer to a string
 *
 * Return: The converted number or 0 if b is NULL
 **/
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int dec = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);

		dec = 2 * dec + (b[a] - '0');
	}

	return (dec);
}
