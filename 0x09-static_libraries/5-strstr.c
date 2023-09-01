#include "main.h"

/**
 * _strstr - a function that locates the
 * first occurrence of a substring in a string
 * @haystack: The string to search in
 * @needle: The substring to search for
 * Return: A pointer to the first occurrence of the substring, or 0 if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}
		if (*y == '\0')
			return (haystack);
	}
	return (0);
}
