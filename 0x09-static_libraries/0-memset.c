#include "main.h"

/**
 * _memset - a function thst fills a block of memory
 * with a specific value
 * @s: the starting address of memory to be filled
 * @b: the desired value
 * @n: the number of bytes to be changed
 * Return: the changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	    int x = 0;

	    for (; n > 0; x++)
	    {
		    s[x] = b;
		    n--;
	    }
	    return (s);
}
