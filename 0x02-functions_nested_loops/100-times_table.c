#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @b: Number of the times table
 */

void print_times_table(int b)
{
	int x;
	int y;
	int z;

	if (b < 0 || b > 15)
		return;
	for (x = 0; x <= b; x++)
	{
		_putchar('0');
		for (y = 1; y <= b; y++)
		{
			_putchar(',');
			_putchar(' ');
			z = x * y;
			if (z < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else if (z < 100)
			{
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			else
			{
				_putchar((z / 100) + '0');
				_putchar(((z / 10) % 10) + '0');
				_putchar((z % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

