#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	int j, i = 0;
	unsigned int sum;
	const char *p;

	p = b;

	while (p[i])
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		sum = *b * (2 ** j);
		b++;
	}

	return (sum);
}
