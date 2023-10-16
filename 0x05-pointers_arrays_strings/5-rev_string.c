#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: A pointer
 * Return: 0
 */

void rev_string(char *s)
{
	int i, j, k;
	char t;

	while (s[i] != '\0')
		i++;

	k = i;
	i--;

	for (j = 0; j <= k / 2; j++, i--)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}

