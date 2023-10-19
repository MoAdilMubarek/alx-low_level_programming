#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if the tow strings are same, other int otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int eq = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			eq = (int)*s1 - (int)*s2
			break;
		}
		s1++;
		s2++;
	}

	return (eq);
}
