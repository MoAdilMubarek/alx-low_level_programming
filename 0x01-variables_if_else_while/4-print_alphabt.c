#include <stdio.h>
/**
 * main
 * Description
 * return 0*/

int main (void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		if(ch == 'e' || ch == 'q')
		{
			ch++;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
	
}
		

