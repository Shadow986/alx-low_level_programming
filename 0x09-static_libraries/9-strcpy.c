#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * This function copies the null-terminated string pointed
 * to by 'src' to the null-terminated string
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * Return: Pointer to 'dest' (the destination string).
 */

char *_strcpy(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	y = 0;

	while (*(src + y) != '\0')
	{
		y++;
	}
	for (; x < y; x++)
	{
		dest[x] = src[x];
	}
	dest[y] = '\0';
	return (dest);
}
