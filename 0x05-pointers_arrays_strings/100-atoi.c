#include "main.h"

/**
 * _atoi - a function converts a string to an integer.
 * @s: The input string.
 * Return: The integer value of the string, or 0 if no valid numbers found.
 */

int _atoi(char *s)
{
	int x, y, no, z, j, digit;

	x = 0;

	y = 0;

	no = 0;

	z = 0;

	j = 0;

	git = 0;


	while (s[z] != '\0')
		z++;

	while (x < z && j == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';

			if (y % 2)
				git = -git;

			n = n * 10 + git;

			f = 1;

			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			
			j = 0;
		}
		x++;

	}
	if (j == 0)
		return (0);

	return (n);
}
