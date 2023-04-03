#include "main.h"
/**_memset():fill a block of memory with particular value.
 *s:address of memory to be filled 
 *b:desired value
 *n:bytes to change
 *
 *Return : return array with new value;
 * */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0
	for (n > 0 ; j++)
	{
		s(j) = b;
		n--
	}
	return(s)
}
