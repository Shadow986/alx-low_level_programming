#include "main.h"

/**
 * _strchr - a function that locates character
 * in a string
 * @s: the string to search
 * @c: the character to located
 * Return: a pointer to the first occurrence of the character
 * or NULL if not found
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
