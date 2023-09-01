#include "main.h"

/**
 * _strpbrk - the start of the function
 * @s: the input value
 * @accept: input value
 * Return: 0 if no matching characters found,
 * or a pointer to the first matching character.
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
