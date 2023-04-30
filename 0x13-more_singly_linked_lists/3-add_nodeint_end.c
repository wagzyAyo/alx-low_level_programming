#include "lists.h"
/**
 * add_nodeint_end - adds new node  at the end of listint_t
 * @head:pointer to first element in the list
 * @n:data to insert
 *
 * Return:The address of the new element or NULL if it fail
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *tmp = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = newNode;

	return (newNode);
}
