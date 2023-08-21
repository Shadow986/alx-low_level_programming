#include "main.h"

/**
 * puts_half - a function that prints of a
 * string
 * @str: the input
 * Return: half of the input
 */

void puts_half(char *str)
{
	int x;
	int y;
	int z;

	z = 0;

	for (x = 0; str[x] != '\0'; x++)
		z++;

	y = (z / 2);

	if ((z % 2) == 1)
		y = ((z + 1) / 2);

	for (x = y; str[x] != '\0'; x++)
		_putchar(str[x]);
	_puthchar('\n');
}
