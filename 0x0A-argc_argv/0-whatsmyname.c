#include <stdio.h>
#include "main.h"
/*
*main : main function prints program name
* @argc : argument count
* @argv : argument array
*
* return : always 0 (success)
*/

int main(int argc__attribute__ ((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
