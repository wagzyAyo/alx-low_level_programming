#include "lists.h"
/**
 * pop_listint - Delete the head node of a listint_t
 * @head :pointer to the first element
 *
 * Return: The data of the element(n)
 **/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (data);
}
