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
	int i;
	int sum = 0;
	bool flag = true;

	if (argc > 1)
	{
		while (argv[i] && flag == true)
		{
			if (argv[i] >= '0' && argv[i] <= '9')
			{
				sum += atoi(argv[i]);
			}
			else
			{
				flag = false;
			}
			i++;
		}
		if (flag == true)
		{
			printf("%d\n", sum);
		}
		else
		{
			printf("Error\n");
			return (1);
		}

	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);
}


