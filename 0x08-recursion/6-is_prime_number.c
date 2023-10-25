#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer i
 * a prime number, otherwise return 0
 * prime - return 1 or 0
 * @n: int
 * @i: int
 * Return: 1 or 0
 */

int prime(int n, int i)
{
	if (n % i == 0)
		return (1);
	else if (i < n)
		prime(n, i + 1);
	else
		return (0);
}

int _sqrt_recursion(int n)
{
	return (prime(n, 2));
}
