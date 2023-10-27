#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: int parameter
 * @argv: pointer to array
 * return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	(void)argc;
	while (argv[i])
		printf("%s\n", argv[i]);

	return(0);
}
