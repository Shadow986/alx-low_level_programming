#include <stdio.h>

/**
 * main - Entry point for program that prints out
 * all possible combinations of two two-digit numbers
 * Return: Everytime 0 (Success)
 */

int main(void)
{
	int x;
	int j;

	for (x = 0; x < 100
			; x++)
	{
		for (y = 0; y < 100
				; y++)
		{
			if (x < y)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(' ');
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);
				if (x != 98 || y != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
