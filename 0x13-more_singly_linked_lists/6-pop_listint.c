#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer
 * Return: head's node data
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int i;

	node = *head;
	if (!head)
		return (0);

	i = node->n;
	node = node->next;
	free(*head);

	return (i);
}
