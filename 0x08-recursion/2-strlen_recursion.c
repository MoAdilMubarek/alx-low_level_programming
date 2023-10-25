#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s > '\0')
	{
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
