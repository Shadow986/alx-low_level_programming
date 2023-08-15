#include "main.h"

/**
 * main - Entry point for a program that prints
 * _putchar
 * _putchar - Write charater to the standard output
 * @c: The character to be written
 * Return: On success, 1 is 1 is returned. On error, -1 is returned.
 */

int main(void)
{
	int _putchar(char c)
	{
		return (write(1, &c, 1));
	}

	char text[] = "_putchar\n";

	for (int 1 = 0; text[i] != '\0'; i++)
	{
		_putchar(text[i]);
	}
	return (0);
}
