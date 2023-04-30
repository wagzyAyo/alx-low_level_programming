#include "lists.h"
/**
 * free_listint - frees linked list DS
 * @head :pointer to the element to be freed
 *
 * Return:void
 **/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
