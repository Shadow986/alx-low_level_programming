#include "main.h"

/**
 * rot13 - a function that encodes a string using the ROT13 cipher
 * @s: input string to be encoded
 * Return: encoded string
 */

char *rot13(char *s)
{
	int x;
	int y;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == data1[y])
			{
				s[x] = datarot[y];
				break;
			}
		}
	}
	return (s);
}
