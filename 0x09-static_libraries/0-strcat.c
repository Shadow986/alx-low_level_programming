#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: The input value
 * @src: The input value
 * Return: the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	for (x = 0; dest[x] != '\0'; x++)
	{
		/* Find the end of the 'dest' string */
	}
	for (y = 0; src[y] != '\0'; y++, x++)
	{
		dest[x] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
