#include "main.h"

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
        int n;

        for(n = 1; n <= 100; n++)
        {
                if (n % 3 == 0 && !(n % 5 == 0))
                        printf("Fizz");
                else if (n % 5 == 0 && !(n = 3 == 0))
                        printf("Buzz");
                else if (n % 3 == 0 && n % 5 == 0)
                        printf("FizzBuzz");
                else
                        printf("%d", n);
                if (num != 100)
                        printf(" ");
                else
                        printf('\n');
        }
       }
        printf("\n");
}      return (0);



