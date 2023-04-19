#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Print name (main function)
 * @name: char name (string)
 * @f: pointer void
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NUL || f == NULL)
		return;
	f(name);
}
