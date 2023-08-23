#include "main.h"

/**
 * print_number - a function print numbers chars
 * @n: the integer to be printed
 * Return: always 0 (success)
 */

void print_number(int n)
{
	unsigned int yx;

	yx = n;

	if (n < 0)
	{
		_putchar('-');
		yx = -n;
	}
	if (yx / 10 != 0)
	{
		print_number(yx / 10);
	}
	_putchar((yx % 10) + '0');
}
