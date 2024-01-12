#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointr
 * Return: num of elem
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t i;

	current = h;
	i = 0;
	while (current != NULL)
	{
		if (current->n)
			i++;
		current = current->next;
	}
	return (i);
}
