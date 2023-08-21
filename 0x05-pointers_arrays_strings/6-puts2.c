#include "main.h"

/**
 * puts2 - a function that prints every character
 * of a string, starting with the first character
 * @str: the input
 * Return: print
 */

void puts2(char *str)
{
	int x = 0;
	int z = 0;
	char *y =  str;
	int j;

	while (*y != '\0')
	{
		y++;
		x++;
	}
	z = x - 1;
	for (j = 0; j <= z; j++)
	{
		if (j % 2 == 0)
	{
		_putchar(str[j]);
	}
	}
	_putchar('\n');
}
