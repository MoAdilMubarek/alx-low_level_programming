#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: A pointer
 * Return: 0
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	char t;

	while (s[i] != '\0')
		i++;


	for (j = 0; j < i / 2; j++)
	{
		t = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = t;
	}
}

