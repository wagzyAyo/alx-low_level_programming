#include "lists.h"
/**
 * sum_listin - Sum of all the data in linked list
 * @head : pointer to the first node
 *
 * Return: Sum  of data in the link list or 0 if there is none
 **/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	
	return (sum);
}
