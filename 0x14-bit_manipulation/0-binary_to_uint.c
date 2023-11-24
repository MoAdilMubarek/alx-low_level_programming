#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		sum <<= 1;
		sum += (*b - '0');
		b++;
	}

	return (sum);
}
