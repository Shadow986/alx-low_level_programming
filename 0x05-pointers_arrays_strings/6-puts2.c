#include "main.h"

/**
 * puts2 - a function that prints every character
 * of a string, starting with the first character
 * @str: the input
 * Return: print
 */

void puts2(char *str)
{
	if (str == NULL)
		return;

	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x += 2;
	}
	_putchar('\n');
}
