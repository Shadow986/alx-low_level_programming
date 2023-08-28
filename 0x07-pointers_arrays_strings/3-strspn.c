#include "main.h"

/**
 * _strspn - a function that gets the
 * length of a prefix substring.
 * @s: The string to search.
 * @accept: input
 * Return: The number of bytes in the initial segment of `s`
 *         which consist only of bytes from `accept`.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int x;
	int y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
			{
				count++;
				break;
			}
		}
		if (!accept[y])
			break;
	}
	return (count);
}
