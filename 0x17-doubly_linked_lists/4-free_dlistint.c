#include "lists.h"

/**
 * free_dlistint - frees a list
 *
 * @head: head node
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *x;

	while (head)
	{
		x = head->next;
		free(head);
		head = x;
	}
}
