#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 *
 * @head: head node
 * @index: index of the node
 *
 * Return: NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head)
	{
		if (index == x)
			return (head);
		head = head->next;
		x++;
	}
	return (0);
}
