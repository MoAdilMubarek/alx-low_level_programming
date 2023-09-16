#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size: size of the square
 * Return: Always 0
*/

void print_square(int size)
{
	int hi, wid;

	for (hi = 1; hi <= size; hi++)
	{
		for (wid = 1; wid <= size; wid++)
			_putchar('#');
		_putchar('\n');
	}
}
