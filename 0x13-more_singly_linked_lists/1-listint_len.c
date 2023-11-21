#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: pointer
 * Return: returns the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
