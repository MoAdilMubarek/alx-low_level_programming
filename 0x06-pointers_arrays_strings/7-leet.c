#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 * @c: pointer to string
 * Return: string
 */

char *leet(char *c)
{
	char str[] = {"A", "a", "E", "e", "O", "o", "T", "t", "L", "l"};
	int value[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
	int n, i;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (n = 0; str[n] != '\0'; n++)
		{
			if (c[i] == str[n])
			{
				c[i] = value[n];
			}
		}

		return (c);
}
