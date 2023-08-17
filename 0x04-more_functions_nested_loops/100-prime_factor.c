#include <stdio.h>
#include "main.h"

/**
 * main - a function that finds and prints the largest
 * prime factors of the number 612852475143
 * Return: Everytime 0 (success)
 */

int main(void)
{
	int x = 2;
	long y = 612852475143;

	while (x < y)
	{
		while (y % x == 0)
		{
			if (y == x)
			{
				break;
			}
			y /= x;
		}
		x++;
	}
	printf("%lu\n", y);
	return (0);
}
