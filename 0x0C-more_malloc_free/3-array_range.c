#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: int
 * @max: int
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *p;
	int i, n;

	if (min > max)
		return (NULL);

	if (max - min == 0)
		i = 2;
	else
		i = max - min + 1;

	p = malloc(sizeof(int) * i);

	if (p == 0)
		return (NULL);

	for (n = 0; min <= max; min++)
	{
		p[n] = min;
		n++;
	}

	return (p);
}
