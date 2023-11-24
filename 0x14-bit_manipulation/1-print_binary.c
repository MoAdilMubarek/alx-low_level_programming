#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int
 */

void print_binary(unsigned long int n)
{
	int i, j;
	unsigned long int var, k;

	if (n == 1)
	{
		_putchar('1');
		return;
	}
	else if (n == 0)
	{
		_putchar('0');
		return;
	}
	       
	for (j = sizeof(unsigned long int) * 8 - 1; j >= 0; j--)
	{
		i = j;
		var = 1 << i;
		k = n&var;
		k == 1 ? _putchar('1') : _putchar('0');
	}
}	


