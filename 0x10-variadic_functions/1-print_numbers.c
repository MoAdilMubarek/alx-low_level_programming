#include "variadic_functions.h"


/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: pointer
 * @n: int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int j;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(ptr, int);
		printf("%d", j);
		if (*separator && i + 1 < n)
			printf("%c ", *separator);
	}
	printf("\n");
}
