#include <stdio>
#include "lists.h"
/**
 * print_list - prints al  the elements in list_t
 * @h : pointer to list_t
 *
 * Return: The number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return(s);
}
