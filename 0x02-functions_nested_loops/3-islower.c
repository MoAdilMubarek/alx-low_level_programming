#include "main.h"

/**
 * A function checks if character is lowrcase
 * Description: A function that checks for lowercase character
 * n is parameter that hold  the value of character
 * Return: 1 if n is in lowercase return 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return(1);
	return(0);
}

