#include "main.h"

/**
 * _memset - a function that fills memory
 * with a constant byte
 * @s: The memory area to be filled
 * @b: The desired value
 * @n: Number of bytes to fill
 * Return: Pointer to the filled memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;

	return (s);
}
