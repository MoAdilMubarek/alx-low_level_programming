#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer
 * @n: int
 * Return: pointer
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new || !head)
		return (new? free(new), NULL : NULL);

	new->n = n;
	new->prev = NULL;

	if (!*head)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}

	return (new);
}
