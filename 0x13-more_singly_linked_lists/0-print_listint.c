#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints all the elements in listint_t
 * @h : linked list pointer
 *
 * Return: Number of nodes
 **/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d/n",h->n);
	        count++;
		h = h->next;
	}
	return (count);
}

