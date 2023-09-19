#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char parameter
 * Return: length of strength
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		++n;
	return (n);
}
