#include "main.h"

/*
 * _abs - a function that computes the absolute value of an integer
 * @c: Take integer value from other function
 * Return: Alwayes 0 (SUCESS)
**/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	else if (n >= 0)
		n = n;

	return (n);
}
