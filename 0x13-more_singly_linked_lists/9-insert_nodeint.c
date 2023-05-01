#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head :pointer to the first node
 * @idx :index of the list where new node is added
 *
 * @n : data
 *
 * Return: Return pointer to the new node or NULL is there is none
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int b;
	listint_t *newNode;
	listint_t *tmp = *head;

	newNode = malloc(sizeof(listint_t *));
	if (!newNode || !head)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (b = 0; tmp && b < idx; b++)
	{
		if (b == idx - 1)
		{
			newNode->next = tmp->next;
			tmp->next = newNode;
			return (newNode);
		}
		else

			tmp = tmp->next;
		}

		return (NULL);
}
