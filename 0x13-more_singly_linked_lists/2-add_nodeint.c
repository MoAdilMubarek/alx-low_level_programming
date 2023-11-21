#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer
 * @n: int
 * Return: pointer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *node;

	node = *head;
	new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (node)
		new->next = node;
	node = new;

	return (new);
}

