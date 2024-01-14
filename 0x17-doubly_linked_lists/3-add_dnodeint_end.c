#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer
 * @n: int
 * Return: pointer
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new || !head)
		return (new ? free(new), NULL : NULL);

	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		dlistint_t *node = *head;

		while (node->next)
		{
			node = node->next;
		}
		new->prev = node;
		node->next = new;
	}

	return (new);
}
