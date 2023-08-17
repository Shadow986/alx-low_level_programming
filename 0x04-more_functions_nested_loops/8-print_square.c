#include "main.h"

/**
 * print_square a function that prints a square
 * @size: size of square
 * Description: it can only use _putchar to print
 * and a '#' to print the square.
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;
		int y;

		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
