#include "main.h"

/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number
 * @n: The number to calculate the square root of
 * Return: The natural square root of n, or -1
 * if there's no natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_helper(n, n / 2));
	}
}

/**
 * _sqrt_helper - Recursive helper function
 * for calculating square root
 * @n: The number to calculate the square root of
 * @estimate: The current estimate for the square root
 * Return: The natural square root of n
 */

int _sqrt_helper(int n, int estimate)
{
	if (estimate * estimate == n)
	{
		return (estimate);
	}
	else if (estimate == 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, estimate - 1));
	}
}
