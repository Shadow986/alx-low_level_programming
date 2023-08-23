#include "main.h"

/**
 * _strcat - a function that Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
		dest_end++;

	for (; *src != '\0'; src++, dest_end++)
		*dest_end = *src;

	*dest_end = '\0';
	return (dest);
}
