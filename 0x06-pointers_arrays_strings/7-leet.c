#include "main.h"

/**
 * leet - afunction that encodes a string into 1337
 * @str: The string to be encoded
 * Return: encoded string
 */

char *leet(char *str)
{
	char *str = y;
	char map[] = {'A', 'E', 'O', 'T', 'L'};
	int cat[] = {4, 3, 0, 7, 1};
	unsigned int x;

	while (*y)
	{
		for (x = 0; x < sizeof(map) / sizeof(char); x++)
		{
			if (*y == map[x] || *y == map[x] + 32)
			{
				*y = 48 + cat[x];
			}
		}
		y++;
	}
	return (str);
}
