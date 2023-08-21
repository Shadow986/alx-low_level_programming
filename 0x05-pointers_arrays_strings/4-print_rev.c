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
	int y;

	x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	s--;
	for (y = x; y > 0; y--)
	{
		_putchar(s);
		s--;
	}
	_putchar('\n');
}
