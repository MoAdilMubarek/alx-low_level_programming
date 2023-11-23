#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	const char *p = b;

	if (b == NULL)
		return (NULL);

	while (*p++)
	{
		if (*p != '1' || *p != '0')
			return (NULL);
	}

	while (*b)
	{
		sum <<= 1;
		sum += (*b - '0');
		b++;
	}

	return (sum);
}
