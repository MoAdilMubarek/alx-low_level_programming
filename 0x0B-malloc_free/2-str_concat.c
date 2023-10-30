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
		s1 = "\n";
	}
	if (s2 == NULL)
	{
		s2 = "\n";
	}
	while (s1[i])
		i++;

	while (s2[j])
		j++;

	size = i + j + 1;

	while (*s2)
	{
		s1[i] = *s2;
		s2++;
		i++;
	}
	s1[i] = '\0';


	ptr = (char *)malloc(i + j + 1);

	while (n <= size)
	{
		ptr[n] = *s1;
		s1++;
		n++;
	}
	ptr[n] = '\0';
	return (ptr);
}
