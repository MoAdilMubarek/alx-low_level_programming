#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer too pointer
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	if (!head || !*head)
	{
		return;
	}
	listint_t *current = *head;
	listint_t *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
		*head = NULL;
	}
}
