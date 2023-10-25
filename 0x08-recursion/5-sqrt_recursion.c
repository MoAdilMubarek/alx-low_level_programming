#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * sqr - return square root of input number
 * @i: int
 * @n: int
 * Return: int
 */
int sqr(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (sqr(n, i + 1));
	else
		return (-1);
}

int _sqrt_recursion(int n)
{
	return (sqr(n, 1));

}
