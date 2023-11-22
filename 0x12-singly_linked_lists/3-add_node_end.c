#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer
 * @str: pointer
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *ptr;
	unsigned int i = 0;
	list_t *node;

	list_t *new = malloc(sizeof(list_t));

	if (!head || !new)
		return (NULL);

	if (str)
	{
		new->str = strdup(str);
		ptr = new->str;

		while (*ptr++)
			i++;

		new->len = i;
	}
	node = *head;
	if (*head)
	{
		while (node->next)
		{
			node = node->next;
		}
		node->next = new;
	}
	node = new;

	return (new);
}
