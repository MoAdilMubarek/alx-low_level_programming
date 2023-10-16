#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse,
 * followed by a new line
 * @s: A pointer
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
