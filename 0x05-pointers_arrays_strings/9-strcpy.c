#include "main.h"

/**
 * char *_strcpy - a function that copies the string
 * pointed to by src
 * @src: copy from
 * @dest: copy to
 * Return: the string
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}

	dest[x] = '\0';

	return (dest);
}
