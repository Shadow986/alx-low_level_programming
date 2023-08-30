#include "main.h"

/**
 * wildcmp - a function that compares
 * two strings with wildcard support
 * @s1: The first string
 * @s2: The second string with possible wildcards
 * Return: 1 if strings can be considered identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
			return (1);
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);
	}
	return (0);
}
