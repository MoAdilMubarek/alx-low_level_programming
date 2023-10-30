#include "main.h"

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: int
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;

	ptr = (char *)malloc(size);

	if (size == 0 || ptr == 0)
	{
		return (NULL);
	}

	while (--size)
	{
		ptr[size] = c;
	}
	return (ptr);
}

