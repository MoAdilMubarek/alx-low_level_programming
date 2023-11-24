#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer
 * @index: int
 * Return: bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n >> index;

	if (index > 31)
		return (-1);

	*n |= (1 << index);

	return (1);
}
