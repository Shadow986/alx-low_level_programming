#include <stdio.h>

/**
 * main - Entry point for a program that prints
 * all possible combinations of single digits
 * Return: Everytime 0 (success)
 */

int main(void)
{
	int x = 0;

	while (x < 10)

		putchar('0' + x);

	if (x != 9)

	putchar(',');
	putchar(' ');

	x++;
	putchar('\n');

	return (0);
}
