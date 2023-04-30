#include "lists.h"
/**
 * add_nodeint - add node at the beginning of listint_t
 * @head : pointer to the first node
 * @n:integer saved
 *
 * Return: address of the new element or NULL if it fail
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
