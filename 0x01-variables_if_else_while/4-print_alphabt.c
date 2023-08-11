#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point for program that
 * prints the lowercase alphabet except
 * 'q' and 'e'
 * Return: Everytime 0 (success)
 */

int main(void)
{
	char x;

	for
		(x = 'a'; x <= 'z'
		 ; x++)
			if (x != 'q' && x != 'e')
				putchar(x);

	putchar('\n');

	return (0);
}
