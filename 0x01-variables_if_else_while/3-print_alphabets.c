#include <stdio.h>

/**
 * main - Entry point for program that
 * prints alphabates in uppercase and lower case
 * Return: Everytime 0 (success)
 */

int main(void)
{
	char x;
	char Y;

	x = 'a';
	Y = 'A';

	for
		(; x <= 'z'
		 ;)
		{
			putchar(x);
			x++;
		}

	for
		(; Y <= 'Z'
		 ;)
		{
			putchar(Y);
			Y++;
		}

	putchar('\n');

	return (0);
}
