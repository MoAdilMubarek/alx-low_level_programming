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
	listint_t *node_to_free;
	unsigned int i;

	node = *head;
	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		node_to_free = node;
		*head = node->next;
		free(node_to_free);
		return (1);
	}

	for (i = 0; i < index - 1 && node; i++, node = node->next)
		;

	if (node->next->next)
	{
		node_to_free = node->next;
		node->next = node->next->next;
		free(node_to_free);
		return (1);
	}
	else
		return (-1);
}

