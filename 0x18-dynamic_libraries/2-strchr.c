#include "main.h"
#include <stddef.h>

/**
 * _strchr - the function entry
 * @s: the input value
 * @c: the input
 * Return: Everytime 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
