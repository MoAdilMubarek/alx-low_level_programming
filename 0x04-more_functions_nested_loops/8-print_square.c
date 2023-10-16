#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size: size of the square
 * Return: Always 0
*/

void print_square(int size)
{
	int row, col;

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
			_putchar('#');
		_putchar('\n');
	}
}
