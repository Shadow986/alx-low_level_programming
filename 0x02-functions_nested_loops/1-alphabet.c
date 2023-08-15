#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 * _putchar Print a single character
 * @c: The character to be printed
 */

void print_alphabet(void)

{

	char character;

	for (character = 'a'; character <= 'z'; character++)

		_putchar(character);


	_putchar('\n');

}
