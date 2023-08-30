#include "main.h"

/**
 * factorial - a function that returns
 * the factorial of a number
 * @n: The number to calculate the factorial of a given number
 * Return: The factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
