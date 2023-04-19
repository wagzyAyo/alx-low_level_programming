#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name : main function- prints name
 *@name - char name(string)
 *@f - void pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if(name == NUL || f == NULL)
		return;
	f(name);
}
