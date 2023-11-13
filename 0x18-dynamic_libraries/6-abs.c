#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * This function takes an integer 'n' and returns
 * its absolute value.
 * @n: The integer to check.
 * Return: The absolute value of the input integer 'n'.
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
