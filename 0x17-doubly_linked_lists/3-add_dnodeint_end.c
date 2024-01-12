#include "lists.h"

/**
 * add_dnodeint_end - function that adds new node at end of dlistint_t list
 * @head: A pointer to the head of the linked list
 * @n: the integer to be added to the dlistint_t
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = *head;
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head =  new_node;
		return (new_node);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
}
