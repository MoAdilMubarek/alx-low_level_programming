#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 * @c: pointer to string
 * Return: string
 */

char *leet(char *c)
{
	char str[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	int value[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int n, i;

	while (*c)
	{
		for (n = 0; str[n] != '\0'; n++)
		{
			if (*c == str[n])
			{
				*c = value[n];
			}
		}
		c++;
		return (c);

}
