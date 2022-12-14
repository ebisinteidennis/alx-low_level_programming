#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 *
 * @head: pointer
 * @index: index of the node
 *
 * Return: address of node
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	n = 0;
	while (n < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		n++;
	}
	return (head);
}
