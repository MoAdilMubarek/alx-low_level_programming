#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer
 * @idx: int
 * @n: integer
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *node;

	new = malloc(sizeof(listint_t));
	if (!head || !new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	node = *head;
	for (i = 0; i < idx - 1 && node; i++, node = node->next)
		;

	if (node)
	{
		new->next = node->next;
		node->next = new;
	}
	else
		return (NULL);

	return (new);
}
