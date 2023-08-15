#include <stdio.h>

/**
 * main - Entry point finds and prints
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	unsigned long int y, z, next, sum;

	y = 1;
	z = 2;
	sum = 0;

	for (x = 1; x <= 33; x++)
	{
		if (y < 4000000 && (y % 2) == 0)
		{
			sum = sum + y;
		}
		next = y + z;
		y = z;
		z = next;
	}
	printf("%lu\n", sum);
	return (0);
}
