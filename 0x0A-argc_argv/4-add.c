#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - adds positive numbers
 * @argc: integer parameter
 * @argv: array of pointers
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c = argv[argc];

	if (argc > 1)
	{
		while (--argc)
		{
			if (*c >= '0' && *c <= '9')
			{
				sum += atoi(argv[argc]);
				c++;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);
}


