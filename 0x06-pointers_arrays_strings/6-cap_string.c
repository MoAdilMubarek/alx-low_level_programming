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
			if (str[i] == del[n])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
					str[i + 2] -= 32;
			}				
		}
	}
	return (str);
}

