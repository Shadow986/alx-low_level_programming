#include "main.h"

/**
 * leet - afunction that encodes a string into 1337
 * @str: The string to be encoded
 * Return: A pointer to the encoded string
 */

char *leet(char *str)
{
	int x, y;
	char map[256] = {0};
	char source[] = "aAeEoOtTlL";
	char replacement[] = "43071";

	for (x = 0; source[x]; x++)
	{
		map[source[x]] = replacement[x];
	}

	for (x = 0; str[x]; x++)
	{
		y = str[x];
		if (map[y] != 0)
		{
			str[x] = map[y];
		}
	}
	return (str);
}

