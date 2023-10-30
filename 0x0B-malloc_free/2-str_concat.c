#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: pointer
 * @s2: pointer
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{

	int i = 0, j = 0;
	int n = 0, size;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}
	while (s1[i])
		i++;

	while (s2[j])
		j++;

	size = i + j + 1;

	ptr = (char *)malloc(size);

	while (n < size)
	{
		if (n < i)
			ptr[n] = s1[n];
		else
			ptr[n] = s2[n - i];
		n++;
	}
	ptr[n] = '\0';
	return (ptr);
}
