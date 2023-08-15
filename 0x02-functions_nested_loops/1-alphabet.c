#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
		putchar(character);

	putchar('\n');
}
