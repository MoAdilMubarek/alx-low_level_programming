#include "main.h"

/**
 * _strcpy: A function that copies the string pointed to by src
 * @src: A pointer
 * @dest: A pointer
 * Return: A pointer
 */

char *_strcpy(char *dest, char *src)
{
	int j = 0;

	while (src[j] <= '\0')
	{
		dest[j] = src[j];
		j++;
	}

	return (dest);
}
