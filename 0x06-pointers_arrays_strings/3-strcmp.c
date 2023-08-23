#include "main.h"

/**
 * _strcmp - a fucntion that compare two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 * Return: s1[x] - s2[x]
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' && s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
	}
	return (s1[x] - s2[x]);
}
