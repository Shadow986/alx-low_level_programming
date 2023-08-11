#include <stdio.h>

/**
 * main - Entry point for a program that prints
 * all possible combinations of single digits
 * Return: Everytime 0 (success)
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{

		putchar(x);
		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	
	putchar('\n');

	return (0);
}
