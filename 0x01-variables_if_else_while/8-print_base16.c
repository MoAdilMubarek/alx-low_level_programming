#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that prints all the numbers of base 16 in lowercase.
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 48;

	while (i <= 102)
	{
		while (i >= 58 && i <= 96) 
		{
			i++;
		}

		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
