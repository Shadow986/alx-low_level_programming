#include "main.h"

/**
 * rot13 - a function that encodes a string
 * using the ROT13 cipher
 * @s: input string to be encoded
 * Return: encoded string
 */

char *rot13(char *s)
{
	char *x = s;
	char *begin = s;
	char upper_bound, lower_bound;

	for (; *ptr != '\0'; ptr++)
	{
		upper_bound = (*x >= 'A' && *x <= 'Z') ? 'Z' : '\0';
		lower_bound = (*x >= 'a' && *x <= 'z') ? 'z' : '\0';

		if (upper_bound || lower_bound)
		{
			if ((*x <= upper_bound - 13) || (*x <= lower_bound - 13))
				*x += 13;
			else
				*x -= 13;
		}
	}
	return (begin);
}

