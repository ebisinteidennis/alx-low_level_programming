#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 *
 * @h: head
 *
 * Return: number of elements
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
