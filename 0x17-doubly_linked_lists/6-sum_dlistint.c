#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data of a linked list
 *
 * @head: head node
 *
 * Return: sum of all data, 0 if the list is empty
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
