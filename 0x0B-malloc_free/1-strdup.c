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

	while (str[i])
		i++;

	ptr = (char *)malloc(i + 1);

	if (str == NULL || ptr == 0)
		return (NULL);

	while (i--)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}



	
