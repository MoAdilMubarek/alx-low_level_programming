#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: pointer to destination input
 * @src: pointer to source input
 * Return: concatenated  string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (dest[i])
		i++;

	for (int j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
