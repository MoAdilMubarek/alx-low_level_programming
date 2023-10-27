#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: number of argument
 * @argv: pointer to array
 * return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 3)
	{
		sum = atoi(argv[1] * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
