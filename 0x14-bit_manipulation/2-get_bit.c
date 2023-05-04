#include "main.h"
/**
 * get_bit - returns value of a given index
 * @n : number of search
 * @index: index of the bit starting from 0
 *
 * Return: the value of the bit at index index or -1 if an error occured
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_index;

	if (index > 63)
		return (-1);

	bit_index = (n >> index) & 1;

	return (bit_index);
}
