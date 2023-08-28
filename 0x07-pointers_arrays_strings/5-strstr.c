#include "main.h"

/**
 * _strstr - a function that locates
 * a substring within a string.
 * @haystack: The string to search.
 * @needle: The substring to locate.
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	if (!*needle)
		return (haystack);

	for (; *haystack; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}
		if (!*n)
			return (haystack);
	}
	return (NULL);
}
