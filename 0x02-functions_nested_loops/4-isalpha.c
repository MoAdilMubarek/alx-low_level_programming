#include "main.h"

/**
 * _isalpha checks if character  is alphabet
 * Description: checks if char is alphabet
 * @c: Takes  input from other functions.
 * Return: 1 if c is character, otherwise
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);	
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

