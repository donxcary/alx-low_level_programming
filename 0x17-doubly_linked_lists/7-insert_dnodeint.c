#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts new node at given position
 * @h: pointer to head of doubly linked list
 * @idx: index of the list where the new node should be added
 * @n: data to be in the new node
 *
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;

	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *temp;
	dlistint_t *tmp;

	if (h == NULL)
		return (NULL);
	temp = *h;
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	if (idx == 1)
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}
	new_node->n = n;
	for (i = 0; i < idx; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	new_node->next = temp;
	new_node->prev = temp->prev;
	tmp = temp->prev;
	tmp->next = new_node;
	temp->prev = new_node;
	return (new_node);
}
