#include "main.h"

    void print_triangle(int size)
    {
        int hi, wid, j;
        
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
