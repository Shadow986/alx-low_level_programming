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
		 ;)
		{
			putchar(x);
			x++;
		}

	for
		(; y <= 'Z'
		 ;)
		{
			putchar(y);
			y++;
		}

	putchar('\n');

	return (0);
}
