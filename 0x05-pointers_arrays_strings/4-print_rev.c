#include "main.h"

/**
 * print_rev - a function that prints a
 * string in reverse
 * @s: string
 * Return: Always 0 (success)
 */

void print_rev(char *s)
{
	int x;

	x = 0;

	while (s[x])
	{
		x++;
	}
	for (int y = x - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
