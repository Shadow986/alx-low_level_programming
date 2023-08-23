#include "main.h"

/**
 * _strncat - a fuction that concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to concatenate from src
 * Return: string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';
	return (dest);
}
