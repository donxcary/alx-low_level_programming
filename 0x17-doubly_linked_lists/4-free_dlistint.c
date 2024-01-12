#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: A pointer to the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
