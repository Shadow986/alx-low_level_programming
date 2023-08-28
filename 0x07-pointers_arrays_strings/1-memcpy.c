#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: Destination memory area
 * @src: Where the copied memory is
 * @n: Number of bytes to copy
 * Return: The copied memory wit n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
