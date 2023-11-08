#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer
 * @size: int
 * @cmp: pointer
 * Return: index of integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
