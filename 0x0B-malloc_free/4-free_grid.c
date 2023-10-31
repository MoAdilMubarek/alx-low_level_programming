#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: pointer
 * @height: int
 * Return: no thing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(ptr[i]);
	free(ptr);
}
