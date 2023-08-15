#include "main.h"

/**
 * print_last_digit - function that prints
 * the last digit of a number
 * @x: the int to extract the last digit
 * Return: value ofthe last digit
 */

int print_last_digit(int x)
{
	int a;

	if (x < 0)
		x = -x;
	a = x % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
