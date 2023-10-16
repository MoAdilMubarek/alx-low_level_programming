#include "main.h"

/**
 * _strcpy: A function that copies the string pointed to by src
 * @src: A pointer
 * @dest: A pointer
 * Description: Copy the string pointed to by 'src' to
 * the buffer pointed to by 'dest'
 * Return: A pointer
 */

char *_strcpy(char *dest, char *src)
{
	int j = 0;

	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
