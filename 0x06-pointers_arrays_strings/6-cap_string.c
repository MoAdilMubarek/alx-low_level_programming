#include "main.h"

/**
 * *cap_string - function that capitalizes all
 * words of a string
 * @str: pointer to char
 * Return: string
 */

char *cap_string(char *str)
{
	int i;

	char del[] = " \n\t,.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		int n;

		for (n = 0; del[n] != '\0'; n++)
		{
			if (str[i] == del[n] && str[i + 1] == 32)
				str[i + 2] -= 32;
			else (str[i] == del[n])
				str[i] -= 32;
		}
	}
	return (str);
}

