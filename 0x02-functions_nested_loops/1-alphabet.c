#include <stdio.h>
#include "main.h"


/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	char 'character';

	for (character = 'a'; character <= 'z'; character++)
		_putchar(character);

	_putchar('\n');
}
