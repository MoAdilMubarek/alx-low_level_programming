#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer
 * @n: int
 * Return: pointer
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistsint_t *new = malloc(sizeof(dlistsint_t));

	if (!new || !head)
		return (new ? free(new), NULL : NULL);

	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
	}
	else
	{
		while ((*head)->next)
		{
			*head = (*head)->next;
		}
		new->prev = *head;
		(*head)->next = new;
	}

	return (new);
}
