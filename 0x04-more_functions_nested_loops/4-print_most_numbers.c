#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,exceppt 2,4
 * Return: Always 0 (Sucesss)
*/

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i % 2 == 0 || i % 4 == 0)
			continue;
		_putchar(i + 48);
		i++;
	}
	_putcharr('\n');
}
