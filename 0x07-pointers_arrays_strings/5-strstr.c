#include "main.h"
/**
* _strstr - Main function
* @haystack: char i
* @needle: char j
* Return:return  0 (Success)
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *j = needle;

		while (*l == *j && *j != '\0')
		{
			l++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}

	return (0);
}
