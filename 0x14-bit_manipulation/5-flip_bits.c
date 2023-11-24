#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: int
 * @m: int
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	int i, diff = 0;

	for (i = 31; i >= 0; i--)
	{
		if (rox & (1UL << i))
			diff++;
	}

	return (diff);
}
