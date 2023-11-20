#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to struc
 * Return: num of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;
	size_t size = 0;
	char *ptr;

	while (h)
	{
		ptr = h->str;
		if (!ptr)
		{
			i = 0;
		}
		else
		{
			while (*ptr++)
				i++;
		}
		printf("[%d] %s\n", i, h->str ? h->str : "(nil)");
		size++;
		i = 0;
		h = h->next;
	}

	return (size);
}
