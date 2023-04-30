#include "lists.h"
/**
 * listint_len - Return the number of elements in link list
 * @h : pointer to traverse
 *
 * Return: Number of nodes
 **/
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
