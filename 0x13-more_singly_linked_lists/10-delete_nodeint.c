#include "lists.h"

/**
 * delete_nodeint_at_index - delete_nodeint_at_index
 * @head: pointer
 * @index: int
 * Return: 1 on success or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	node = *head;
	if (!head)
		return (-1);

	for (i = 0; i < index + 1 && node; i++, node = node->next)
		;

	if (node->next->next)
	{
		node->next = node->next->next;
		return (1);
	}
	else
		return (-1);
}

