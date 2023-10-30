#include "main.h"

/**
 * alloc_gridm - returns a pointer to a 2 dimensional array of integers.
 * @width: int
 * @height: int
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int));
	if (ptr == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
	}

	if (ptr[i] == 0)
	{
		while (i--)
			free(ptr[i]);
		free(ptr);
		return (NULL);
	}

	for (j = 0; j < width; j++)
		ptr[i][j] = 0;

	return (ptr);
}
