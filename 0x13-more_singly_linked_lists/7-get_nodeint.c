#include "list.h"
/**
 * get_nodeint_at_index - Returns a node at certain index
 * @head :pointer to the first node
 * @index : index of the returning node
 *
 * Return:pointer of the node or NULL
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *tmp = head;

	while(tmp && i < index)
	{
		tmp = tmp->next;
		a++;
	}

	return (tmp ? tmp : NULL);
}
