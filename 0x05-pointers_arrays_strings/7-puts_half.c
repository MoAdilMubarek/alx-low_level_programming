#include "main.h"

/**
 * puts_half - A function that prints half of a string
 * @str: A pointer
 * Return: nothing
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	i++;

	for (i /= 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
