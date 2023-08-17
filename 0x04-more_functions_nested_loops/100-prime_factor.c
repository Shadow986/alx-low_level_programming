#include <stdio.h>
#include "main.h"

/**
 * main a function that finds and prints the largest
 * prime factors of the number 612852475143
 * Return: Everytime 0 (success)
 */

int main(void)
{
	long int x;
	long int y;
	long int z;

	x = 612852475143;
	y = - 1;

	while (x % 2 == 0)
	{
		y = 2;
		x /= 2;
	}
	for (z = 3; z <= sqrt(x); z = z +2)
	{
		while (x % z == 0)
		{
			y = z;
			x = x / z;
		}
	}
	if (x = 2)
		y = x;
	printf("%ld\n", y);
	return (0);
}
