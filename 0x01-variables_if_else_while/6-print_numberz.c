#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that prints all single digit
 numbers of base 10 starting from 0, followed by a new line.
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	
	for (n = 48; n <= 57; n++)
	{
	       putchar(n);
	}
        putchar('\n');
       
        return (0);
}	
