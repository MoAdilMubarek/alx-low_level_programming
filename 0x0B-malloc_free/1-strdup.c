#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to char
 * Return: pointer
 */

char *_strdup(char *str)
{
	int i = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	ptr = (char *)malloc(i + 1);

	if (ptr == 0)
		return (NULL);

	while (i--)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
