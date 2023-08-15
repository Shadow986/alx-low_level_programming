#include "main.h"

/**
 * print_times_table - a function that prints the n times
 * table
 * @b: number of the times table
 */

void print_times_table(int b)
{
	int x;
	int y;
	int z;

	if (b >= 0 && b <= 15){
		for (x = 0; x <= b; x++)
		{
			for (y = 0; y <= b; y++){
				z = y * x;

				if (y == 0){
					_putchar(z + '0');
				}
				else if (z < 10 && y != 0){
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				}
				else if (z >= 10 && z < 100){
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
				}
				else if (z >= 100){
					_putchar(',');
					_putchar(' ');
					_putchar((z / 100) + '0');
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
