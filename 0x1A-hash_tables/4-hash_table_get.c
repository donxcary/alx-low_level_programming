#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: the value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	if (strlen(key) > 0 || ht != NULL || key != NULL)
	{
		unsigned long indx = key_index((unsigned char *)key, ht->size);
		hash_node_t **arr = ht->array;
		hash_node_t *ptr;

		if (arr[indx] == NULL)
			return (NULL);
		ptr = arr[indx];
		while (ptr != NULL)
		{
			if (strcmp(ptr->key, (char *)key) == 0)
			{
				return (ptr->value);
			}
			ptr = ptr->next;
		}
		return (NULL);
	}
	return (NULL);
}
