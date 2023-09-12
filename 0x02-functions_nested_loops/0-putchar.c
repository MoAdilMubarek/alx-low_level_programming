#include "main.h"

/**
 * main - check the code
 * Description: A program that prints _putchar, followed by a new line  
 * Return: Always 0.
*/

int main() 
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
