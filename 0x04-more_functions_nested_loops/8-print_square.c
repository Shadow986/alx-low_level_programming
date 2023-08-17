#include "main.h"

/**
 * print_square a function that prints a square
 * @size: size of square
 */

void print_square(int size)
{
	int x;
	int y;
	y = 0;
	
	if (size < 1)
		_putchar('\n');
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++
		}
		_putchar('\n');
		y++;
	}
}
