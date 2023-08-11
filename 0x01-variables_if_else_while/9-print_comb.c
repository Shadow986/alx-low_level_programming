#include <stdio.h>

/**
 * main - Entry point for a program that prints
 * all possible combinations of single digits
 * Return: Everytime 0 (success)
 */

int main(void)
{
	int x;

	for (x = 48; x < 58
			; x++)
		putchar(x);

	if (x != 57)

	putchar(44);
	putchar(32);
	putchar(10);

	return (0);
}
