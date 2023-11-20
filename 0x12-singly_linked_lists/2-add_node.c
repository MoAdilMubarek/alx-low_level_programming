#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to head pointer
 * @str: pointer
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *ptr;
	unsigned int i = 0;

	list_t *new = malloc(sizeof(list_t));

	if (!new || !head)
		return (NULL);

	if (!str)
	{
		new->str = NULL;
		new->len = 0;
	}
	else
	{
		new->str = strdup(str);
		ptr = new->str;
		while (*ptr++)
			i++;
	}
	new->len = i;
	
	new->next = *head;
	*head = new;

	return (new);
}
	

