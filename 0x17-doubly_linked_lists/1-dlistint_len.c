#include "lists.h"
/**
* print_dlistint - prints all the elements in
* dlistint_t list
*
*@h : head of the list
*Return: The number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
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
