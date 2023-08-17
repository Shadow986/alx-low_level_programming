#include "main.h"

/**
 * _isdigit - function that checks fora digit
 * @x: char to be checked
 * Return: 0 or 1
 */

int _isdigit(int x)
{
	if (x >= '0' && x <= '9')
		return (1);
	else
		return (0);
}
