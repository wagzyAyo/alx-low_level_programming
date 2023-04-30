#include "lists.h"
/**
 * pop_listint_t - Delete the head node of a listint_t
 * @head :pointer to the first element
 *
 * Return: The data of the element(n)
 **/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int node;

	if (!head || !*head)
		return (0);

	node = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (node)
}
