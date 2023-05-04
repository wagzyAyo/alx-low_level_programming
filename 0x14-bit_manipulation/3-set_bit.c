#include "main.h"
/**
 * set_bit - Set the value of bit to 1 at a given index
 * @n : pointer to the number
 * @index : index starting from 0
 *
 * Return: return 1 if it works, -1 if an erro occur
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}
