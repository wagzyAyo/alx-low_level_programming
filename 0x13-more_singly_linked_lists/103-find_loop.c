#include "lists.h"
/**
 * find_listint_loop - finds a loop in a linked list
 * @head: pointer to the first node 
 *
 * Return:Address of the node where the loop starts or NULL if there is none
 **/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i = head;
	listint_t *j = head;

	if (!head)
		return (NULL);

	while (i &&  && j->next)
	{
		j = j->next->next;
		i = i->next;
		if (j == i)
		{
			i = head;
			while (i != j)
			{
				i = i->next;
				j = j->next;
			}
			return (j);

		}
	}

	return (NULL);
}
