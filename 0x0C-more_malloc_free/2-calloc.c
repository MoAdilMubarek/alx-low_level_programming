#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p = mlloc(size * nmemb);

	if (size == 0 || nmemb == 0)
		return (NULL);

	if (p == 0)
		return (NULL);

	while (nmemb--)
		p[nmemb] = 0;

	return (p);
}
