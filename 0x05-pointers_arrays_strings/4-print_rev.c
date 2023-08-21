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

	y = 0;

	if (*s != '\0')
	{
		while (*(s + y) != '\0')
		{
			y++;
		}
		for (x = y - 1; x >= 0; x--)
			_putchar(*(s + x));
	}
	_putchar('\n');
}
