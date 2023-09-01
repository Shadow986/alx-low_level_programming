#include "main.h"

/**
 * _memcpy - a function that copies
 * the memory area
 * @dest: where the memory is stored
 * @src: where the memory is copied
 * @n: the number of bytes
 * Return: the  copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;
	int y;

	x = 0;
	y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
