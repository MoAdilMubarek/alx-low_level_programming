#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: pointer
 * @n: int
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *j;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		for (j = va_arg(ptr, char *); *j != '\0'; j++)
		{
			if (*j == '\0')
				printf("(nil)");
			else
				printf("%c", *j);
		}
		if (*separator && i + 1 < n)
			printf("%c ", *separator);
	}
	printf("\n");
}
