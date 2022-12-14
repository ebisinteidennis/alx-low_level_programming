#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 *
 * @head: pointer
 *
 * Return: head nodes data(n)
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
