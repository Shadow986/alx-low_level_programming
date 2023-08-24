#include "main.h"

/**
 * rot13 - a function that encodes a string using the ROT13 cipher
 * @s: input string to be encoded
 * Return: encoded string
 */

char *rot13(char *s)
{
	char *x = s;
	char *begin = s;

	char offset_upper = 'A' + 13;
	char offset_lower = 'a' + 13;
	char upper_overflow = 'Z' - 12;
	char lower_overflow = 'z' - 12;

	while (*x != '\0')
	{
		char upper_check = (*x >= 'A' && *x <= 'Z');
		char lower_check = (*x >= 'a' && *x <= 'z');

		if (upper_check)
		{
			if (*x <= upper_overflow)
				*x += 13;
			else
				*x -= 13;
		}
		if (lower_check)
		{
			if (*x <= lower_overflow)
				*x += 13;
			else
				*x -= 13;
		}
		x++;
	}
	return (begin);
}

