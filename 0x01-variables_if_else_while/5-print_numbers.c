#include <stdio.h>

/**
 * main - Entry point that prints single
 * digit numbers of base 10
 * Return: everytime 0 (success)
 */

int main(void)
{
	int count;

	for (count = 0; count < 10
			; count++)
		printf("%d\n", count);
	printf("\n");

	return (0);
}
