#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: The pointer to convert
 * Return: A integer
 */
int _atoi(char *s)
{
	int x = 0;
	unsigned int xy = 0;
	int z = 1;
	int j = 0;

	while (s[x])
	{
		if (s[x] == 45)
	{
		z *= -1;
	}
	while (s[x] >= 48 && s[x] <= 57)
	{
		j = 1;
		xy = (xy * 10) + (s[x] - '0');
		x++;
	}
	if (j == 1)
	{
		break;
	}
	x++;
	}
	xy *= z;
	return (xy);
}
