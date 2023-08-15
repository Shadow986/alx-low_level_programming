#include "main.h"

/**
 * jack_bauer - function that prints every minute
 * of the dayof jack bauer
 * starting from  00:00 to 23:59
 */

void jack_bauer(void)
{
	int x;
	int y;

	x = 0;

	while (x < 24)
	{
		y = 0;

		while (y < 60)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar9('\n');

			y++;
		}

		x++

	}
}

