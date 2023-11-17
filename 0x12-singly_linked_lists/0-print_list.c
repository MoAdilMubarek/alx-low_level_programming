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
	char *ptr = h->str;

	if (h->str == NULL)
	{
		printf("[%d] %s\n", 0, "(nil)");
	}
	else
	{
		while (h)
		{
			while (*ptr)
			{
				i++;
				ptr++;
			}
			printf("[%d] %s\n", i, h->str);
			size++;
			h = h->next;
		}

	}

	return (size);
}
