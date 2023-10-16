#include "main.h"

/**
 * _strcpy: A function that copies the string pointed to by src
 * @src: A pointer
 * @dest: A pointer
 * Return: A pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i])
		i++;

	for (j = 0, i; src[j] <= '\0'; i++, j++)
		dest[i] = src[j];

	return (dest);
}
