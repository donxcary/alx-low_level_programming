#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns nth node of dlistint_t list
 * @head: pointer to head of doubly linked list
 * @index: is the index of the node, starting from 0
 *
 * Return: pointer to nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
	}
	return (head);
}
