#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function that adds nodes at the end list_t
 * @head : pointer to lists_t
 * @str : string to be added in node
 *
 * Return: the address of the new element, or NULL if it failed
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
