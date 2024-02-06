#include "hash_tables.h"

/**
 * create_node - function to create node and initialise key, value
 * @key: is the key
 * @value: is the value associated with the key
 *
 * Return: pointer to new node created
 */
hash_node_t *create_node(char *key, char *value)
{
	hash_node_t *head;
	char *dup_val, *dup_key;

	head = malloc(sizeof(hash_node_t));
	if (head == NULL)
		return (NULL);
	dup_key = strdup((char *)key);
	if (dup_key == NULL)
	{
		free(head);
		return (NULL);
	}
	dup_val = strdup((char *) value);
	if (dup_val == NULL)
	{
		free(head);
		free(dup_key);
		return (NULL);
	}
	head->key = key;
	head->value = value;
	head->next = NULL;
	return (head);
}

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key
 * @value: is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (strlen(key) > 0 || ht != NULL || key != NULL || value != NULL)
	{
		unsigned long indx = key_index((unsigned char *)key, ht->size);
		hash_node_t **arr = ht->array;
		hash_node_t *head, *ptr;
		char *dup_val;

		if (arr[indx] != NULL)
		{
			ptr = arr[indx];
			while (ptr != NULL)
			{
				if (strcmp(ptr->key, (char *)key) == 0)
				{
					dup_val = strdup((char *) value);
					if (dup_val == NULL)
						return (0);
					ptr->value = dup_val;
					return (1);
				}
				ptr = ptr->next;
			}
		}
		head = create_node((char *)key, (char *)value);
		if (head == NULL)
			return (0);
		if (arr[indx] != NULL)
			head->next = arr[indx];
		arr[indx] = head;
		ht->array = arr;
		return (1);
	}
	return (0);
}
