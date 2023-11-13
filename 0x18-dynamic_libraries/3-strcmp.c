#include "main.h"

/**
 * _strcmp - a function that compares
 * string values
 * @s1: the input value
 * @s2: input value
 * Return: s1[x] - s2[x]
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' && s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
	}
	return (0);
}
