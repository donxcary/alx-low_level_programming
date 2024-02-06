#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: is the key in strings
 * @size: is the size of the array of the hash table
 *
 * Return: index at which the key/value pair should be stored in hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size > 0 && key != NULL)
	{
		unsigned long int hash = hash_djb2(key);
		unsigned long int index = hash % size;

		return (index);
	}
	return (0);
}
