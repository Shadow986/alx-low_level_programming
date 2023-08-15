#include <stdio.h>
#include "main.h"


/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	char x = 'a';

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);

	_putchar('\n');
}
