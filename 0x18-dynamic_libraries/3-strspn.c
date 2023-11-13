#include "main.h"

/**
 * _strspn - the start of the function
 * @s: the input value
 * @accept: the input value
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;
	int y;

	x = 0;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				x++;
				break;
			}
			else if (accept[y + 1] == '\0')
				return (x);
		}
		s++;
	}
	return (x);
}
