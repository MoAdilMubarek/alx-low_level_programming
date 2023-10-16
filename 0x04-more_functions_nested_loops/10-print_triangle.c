#include "main.h"

    void print_triangle(int size)
    {
        int hi, wid, j;

        if (size <= 0)
            _putchar('\n');
        for (hi = 1; hi <= size; hi++)
        {
            for (j = hi; j <= size; j++)
            {
                _putchar(' ');
                _putchar(' ');
            }   
            for (wid = 1; wid <= hi; wid++)
            {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
