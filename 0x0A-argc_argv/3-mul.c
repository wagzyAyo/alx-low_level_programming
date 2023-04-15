#include <stdio.h>
#include "main.h"
/**
* main - multiply two argument numbers
*
* @argc : argument count
* @argv : argument vector
* Return: Always 0 (success)
*/
int main(argc, char *argv[])
{
int num1 = 0;
int num2 = 0;
if (argc == 3)
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
printf("%d\n", num1 *num2);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
