#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t
 * @head: pointer
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum = 0;

	if (!head)
		return (0);

	node = head;
	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
