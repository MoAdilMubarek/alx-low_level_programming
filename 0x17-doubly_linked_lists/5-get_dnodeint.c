#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer
 * @index: pointer
 * Return: pointer
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;

	if (!head)
		return (NULL);

	node = head;

	while (index > 0)
	{
		node = node->next;
		index--;
	}
	return (node);
}
