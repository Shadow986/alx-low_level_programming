#include <stdio.h>

/**
 * main - Entry point for program that
 * prints alphabates in uppercase and lower case
 * Return: Everytime 0 (success)
 */

int main(void)
{
	char x;
	char y;

	x = 'a';
	y = 'A';

	for
		(; x <= 'z'
		 ; x++) {
			putchar(x);
		}
	putchar('\n');

	for
		(; y <= 'Z'
		 ; y++) {
			putchar(y);
		}

	putchar('\n');

	return (0);
}
