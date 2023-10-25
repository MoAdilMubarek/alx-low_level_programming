#include "main.h"

/**
 * is_prime_number - checks if n is a prime number
 * @n: int
 * @i: int
 * Return: 1 or 0
 */

int prime(int n, int i);

/**
 * prime - return 1 if input value is prime, otherwise return 0
 * @n: int
 * @i: int
 * Return: 1 or 0
 */

int prime(int n, int i)
{
	if (n % i == 0)
		return (1);
	else if (i < n)
		return (prime(n, i + 1));
	else
		return (0);
}

int is_prime_number(int n)
{
	return (prime(n, 2));
}
