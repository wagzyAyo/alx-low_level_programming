#include "main.h"
/**
 * get_endianness - checks endianness
 *
 * Return: 0 if big endian , 1 if small endian
 **/
int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char*) & a;

	return (*b)
}
