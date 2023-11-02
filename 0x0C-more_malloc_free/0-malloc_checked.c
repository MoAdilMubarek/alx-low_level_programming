#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: int
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	char *p = malloc(b);

	if (p == 0)
		exit(98);

	return (p);
}
