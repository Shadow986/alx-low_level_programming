#include "main.h"

int actual_sqrt_recursion(int n, int x);

/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number
 * @n: The number to calculate the square root of
 * Return: The resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - a function that recurses
 * to find the natural square root of a number
 * @n: The number to calculate the square root of
 * @x: Iterator
 * Return: The resulting square root
 */

int actual_sqrt_recursion(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (actual_sqrt_recursion(n, x + 1));
}
