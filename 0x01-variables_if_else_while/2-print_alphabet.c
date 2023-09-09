#include <stdio.h>

/**
 *Entry point
 *Description: a program that prints the alphabet in lowercase, followed by a new line.
 * */

int main ()
{
	char ch = 'a';
	while(ch >= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
