#include "main.h"

/**
 * _strlen -a function that returns the length
 * of a string
 * @s: string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int x;

	x = 0;

	if (s != NULL)
	{
		for (*s != '\0'; s++)
		{
			x++;
		}
	}
	return (x);
}
