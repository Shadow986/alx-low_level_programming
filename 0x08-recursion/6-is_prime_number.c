#include "main.h"

/**
 * is_prime_number - a function that checks
 * if a number is prime
 * @n: The number to be checked
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n <= 3)
	{
		return (1);
	}
	else if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	else
	{
		int x;

		for (x = 5; x * x <= n; x += 6)
		{
			if (n % x == 0 || n % (x + 2) == 0)
			{
				return (0);
			}
		}
		return (1);
	}
}
