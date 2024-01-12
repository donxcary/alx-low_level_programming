#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * @head: pointer to head of list
 * @index: index of the node that should be deleted
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp, *tmp, *ptr;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0 && temp->next == NULL)
	{
		*head = NULL;
		return (1);
	}
	if (index == 0 && temp->next != NULL)
	{
		tmp = temp->next;
		tmp->prev = NULL;
		temp = temp->prev = temp->next = NULL;
		*head = tmp;
		return (-1);
	}
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}
	tmp = temp->next;
	tmp->prev = temp->prev;
	ptr = temp->prev;
	ptr->next = tmp;
	temp = temp->prev = temp->next = NULL;
	return (1);
}
