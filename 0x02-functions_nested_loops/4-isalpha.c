#include "mainc.h"

/**
 * _isalpha checks if character  is alphabet
 * @c: Takes  input
 * Return: 1 if c is character, otherwise
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
		return(1);
	return(0);
}

