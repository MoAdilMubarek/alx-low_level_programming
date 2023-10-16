#include "main.h"

/**
 * _puts - A function that prints a string, followed by a new line
 * @str: A pointer
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
		_putchar(str[i]);
	_putchar('\n');
}

