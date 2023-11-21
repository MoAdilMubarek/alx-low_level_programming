#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer
 * @n: int
 * Return: pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	new = malloc(sizeof(listint_t));

	if (!head || !new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
		*head = new;
	else
	{
		while (*head->next)
		{
			*head = *head->next;
		}
		*head->next = new;
	}

	return (new);
}
