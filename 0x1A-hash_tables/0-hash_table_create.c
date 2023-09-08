#include "hash_tables.h"

/**
 * hash_table_create - fuction that creates hash table
 * @size : size of the array
 *
 * Return: NULL if error occurs else return a pointer
 * to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *created_table;
	unsigned long int x;

	created_table = malloc(sizeof(hash_table_t));

	if (created_table == NULL)
		return (NULL);

	created_table->size = size;
	created_table->array = malloc(sizeof(hash_node_t *) * size);

	if (created_table->array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		created_table->array[x] = NULL;
	}

	return (created_table);
}

