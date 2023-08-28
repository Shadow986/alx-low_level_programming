#include "main.h"

/**
 * _strchr - a function that locates character
 * in a string
 * @s: the string to search
 * @c: the character to located
 * Return: Always 0 (success)
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] != '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
