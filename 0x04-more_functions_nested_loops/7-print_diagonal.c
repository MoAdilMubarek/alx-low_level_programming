#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: number of times the character \ should be printed
 * Return: Always 0 (Success)
*/

void print_diagonal(int n)
{
	int j, k, l;

	if (n > 0)
	{
		for (j = n; j > 0; j--)
		{
			for (k = n; k > j; k--)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}




