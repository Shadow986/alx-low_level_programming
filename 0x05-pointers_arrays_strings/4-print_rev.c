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

	for (x = 0; s[x] != '\0'; x++)
		;
	for (int y = x - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
