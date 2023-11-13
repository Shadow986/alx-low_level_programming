#include "main.h"

/**
 * _isupper - a function that checks for
 * uppercase letters
 * @c: char to check
 * Return: 0 or return 1 if its an uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
