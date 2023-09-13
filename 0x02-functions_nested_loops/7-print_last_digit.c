#include "main.h"

/*
 * function that prints the last digit of a number
 * @n: Take integer value
 *
 * Return: 0 Success
**/

int print_last_digit(int n)
{
	int last;

	if (n < 0)
		last = -1 * (n % 10);
	else
		last = n % 10;

	_putchar(last + '0');
	return (last);
}
