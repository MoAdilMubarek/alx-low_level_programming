#include "main.h"

/**
 * *_strstr - a function that locates a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*needle == *haystack)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (haystack);

}

