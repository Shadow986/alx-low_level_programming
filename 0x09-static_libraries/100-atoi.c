#include "main.h"

/**
 * _atoi - a function that converts
 * a string into an integer.
 * @s: The string to convert.
 * Return: The converted integer value.
 */

int _atoi(char *s)
{
	int x = 1;
	int y = 0;
	unsigned int cat = 0;

	while (!(s[y] >= '0' && s[y] <= '9') && s[y] != '\0')
	{
		if (s[y] == '-')
			x *= -1;
		y++;
	}
	while (s[y] >= '0' && s[y] <= '9' && s[y] != '\0')
	{
		cat = (cat * 10) + (s[y] - '0');
		y++;
	}
	cat *= x;

	return (cat);
}
