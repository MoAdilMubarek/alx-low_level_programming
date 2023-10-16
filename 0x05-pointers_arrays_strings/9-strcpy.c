#include "main.h"

/**
 * _strcpy: A function that copies the string pointed to by src
 * @src: A pointer
 * @dest: A pointer
 * Return: A pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;

	while (src[j] <= '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
