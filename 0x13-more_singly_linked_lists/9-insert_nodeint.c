#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer
 * @idx: int
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *node, *current;

	new = malloc(sizeof(listint_t));
	if (!head || !new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	node = *head;
	for (i = 0; i < idx + 1 && node; i++, node = node->next)
		;

	if (node)
	{
		current = node->next;
		node->next = new;
		new->next = current;
	}
	else
		return (NULL);

	return (new);
}


	
