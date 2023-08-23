#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @str: The string to be encoded
 * Return: encoded string
 */

char *leet(char *str)
{
	char *y = str;
	char map[] = {'A', 'E', 'O', 'T', 'L'};
	int cat[] = {4, 3, 0, 7, 1};
	unsigned int x;

	while (*y)
	{
		x = 0;
		while (x < sizeof(map) / sizeof(char))
		{
			if (*y == map[x] || *y == map[x] + 32)
			{
				*y = '0' + cat[x];
				break;
			}
			x++;
		}
		y++;
	}
	return (str);
}

