#include "main.h"

/**
 * print_sign - function that prints
 * the sign of a number
 * @x: the int to check
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if x is zero
 * -1 and prints - if x is less than zero
 */

int print_sign(int x)
{
	if (x > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (x == 0)
	{
		_putchar(48);

		return (0);
	}
	else if (x < 0)
	{
		_putchar('-');
	}

	return (-1);
}
