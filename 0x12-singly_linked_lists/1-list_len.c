#include <stdio>
#include "lists.h"
/*
 *  list_len - returns the number of elements in a linked lists
 *  @h : pointer to the lists_t
 *
 *  Return: return number of elements in h
 **/
size_t list_len(const list_t *h)
{
	size_t i = 0;
	
	while (h)
	{
		i++;
		h = h->next;
	}
	return(i)
}
