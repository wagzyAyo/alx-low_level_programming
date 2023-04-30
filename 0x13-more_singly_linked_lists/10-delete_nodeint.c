#include "lists.h"
/**
 * delete_nodeint_at_index - Delete a node in the list at certain index
 * @head :pointer to the first node
 * @index : index of the node that should be deleted
 *
 * Return: return 1 if success -1 if fail
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;   /*temporary*/
	listint_t *curr = NULL;  /*current*/
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (a < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		a++;
	}

	curr = tmp->next;
	tmp->next = curr->next;
	free(curr);

	return (1);
}
