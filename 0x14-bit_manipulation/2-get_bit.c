#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index
 * @n: int
 * @index: int
 * Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31)
		return (-1);

	n = n >> index;
	return (n & 1);

}
