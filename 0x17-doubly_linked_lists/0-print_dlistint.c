#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer
 * Return: num of element
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current;
	size_t i;

	current = h;
	i = 0
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}

	return (i);
}
