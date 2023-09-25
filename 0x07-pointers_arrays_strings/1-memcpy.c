#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: pointer
 * @src: pointer
 * @n: unsigned int
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; n--, i++)
		dest[i] = src[i];

	return (dest);
}
