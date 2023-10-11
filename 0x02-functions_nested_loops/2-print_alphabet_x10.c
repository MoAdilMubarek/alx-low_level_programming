#include "main.h"

/**
 * 2-print_alphabet_x10.c - print 10 times alphabet
 * Description: A function that prints 10 times the alphabet from a-z
 * , in lowercase followed by a new line
 * Return: Always 0.
*/

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

