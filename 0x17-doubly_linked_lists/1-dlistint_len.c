#include "lists.h"
/**
* dlistint_len - Returns all the elements in
* a doubly linked  list
*
*@h : head of the list
*Return: The number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	int counter;

	counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
