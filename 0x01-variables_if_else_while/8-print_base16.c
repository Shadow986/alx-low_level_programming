#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point for program that prints
 * all the numbers of base 16
 * Return: Everytime 0 (success)
 */

int main(void)
{
	char x;

	for (x = '0'; x <= '9'
			; x++)
		putchar(x);
	for (x = 'a'; x <= 'f'
			; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
