#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * @str: A pointer
 * Return: 0
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
