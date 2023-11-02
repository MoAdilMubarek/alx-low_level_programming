#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer
 * @s2: pointer
 * @n: int
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int a = 0, b = 0;
	unsigned int i;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	while (s1[a])
		a++;
	while (s2[b])
		b++;

	if (n > b)
		n = b;
	p = malloc(a + n + 1);
	if (p == 0)
		return (NULL);

	for (i = 0; i < a + n; i++)
	{
		if (i < a)
			p[i] = s1[i];
		else
			p[i] = s2[i - a];
	}
	p[i] = '\0';

	return (p);
}


