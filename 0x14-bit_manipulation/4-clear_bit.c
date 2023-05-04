#include "main.h"
/**
 * clear_bit - set a value of a bit to 0 at a given index
 * @n : pointer to the number
 * @index :index of the bit starting from 0
 *
 * Return: return 1 if success or -1 if fail
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
