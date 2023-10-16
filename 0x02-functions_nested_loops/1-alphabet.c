#include "main.h"


/**
 * print_alphabet - prints alphabet
 * Description: A function that prints alphabet
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i  <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
