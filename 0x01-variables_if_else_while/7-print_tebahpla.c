#include <stdio.h>

/**
 * main - Entry point for program that prints
 * lowercase alphabets in reverse
 * Return: Everytime 0 (success)
 */

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'
			; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
