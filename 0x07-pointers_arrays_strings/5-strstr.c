#include "main.h"

/**
 * *_strstr - a function that locates a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; needle[i] != '\0'; i++)
	{
		while (*haystack)
		{
			if (needle[i] == *haystack)
			{
				return (haystack);
				break;
			}
			else
				haystack++;
		}
	}
}

