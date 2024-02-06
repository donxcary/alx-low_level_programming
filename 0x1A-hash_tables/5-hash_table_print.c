#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: is the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	if (ht != NULL)
	{
		unsigned long int count = 0;
		hash_node_t **arr = ht->array;
		hash_node_t *ptr;
		char *key, *value;

		printf("{");
		for (count = 0; count < ht->size; count++)
		{
			if (arr[count] == NULL)
				continue;
			else
			{
				ptr = arr[count];
				while (ptr != NULL)
				{
					key = ptr->key;
					value = hash_table_get(ht, key);
					printf("'%s': '%s', ", key, value);
					ptr = ptr->next;
				}
			}
		}
		printf("}\n");
	}
}
