#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size:  the size of the array
 *
 * Return: pointer to hash table created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **arr;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	new_table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	arr = (hash_node_t **) malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = NULL;
	}
	new_table->array = arr;
	new_table->size = size;
	return (new_table);
}
