#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @h : pointer to the first node
 *
 * Return:The size of node that was freed
 **/
size_t free_listint_safe(listint_t **h)
{
	size_t *size = 0;
	int i;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}

	*h = NULL;

	return (size);
}

