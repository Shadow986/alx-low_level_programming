#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input string
 * Return: the string in reverse
 */

void rev_string(char *s)
{
	char x = s
	int y = 0;
	int z;

	while (s[y] != '\0')
		y++;
	y--;
	for (z = 0; z < y; z++)
	{
		y--;
		x = s[z];
		s[z] = s[y];
		s[y] = x;
		y--;
	}
}
