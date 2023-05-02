#include "lists.h"
/**
 * reverse_listint - reverse a linked list listint
 * @head :pointer to the first node
 *
 * Return:return a pointer to the first node
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *bfr = NULL;
	listint_t *aft = NULL;

	while (head)
	{
		aft = (*head)->next;
		(*head)->next = bfr;
		bfr = *head;
		*head = aft;
	}

	*head = bfr;

	return (*head);
}
