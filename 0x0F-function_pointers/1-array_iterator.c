#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: pointer
 * @size: int
 * @action: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array && size && action)
	{
		for (; i < size; i++)
			action(array[i]);
	}
}
