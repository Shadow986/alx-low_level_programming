#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - that prints 10 times the
 * alphabet, in loercase
 */

void print_alphabet_x10(void)
{
	char x

	int i;

	i = 0;

	while (i < 10)

	{
		x = 'a';
		while (x <= 'z')

		{
			_putchar(x);

			x++;
		}
	}
}
