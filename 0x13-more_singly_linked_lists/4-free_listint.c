#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}


