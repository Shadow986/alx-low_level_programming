#include "main.h"

/**
 * string_toupper - a function that changes all lowercase
 * letters of a string to uppercase
 * @str: The input string
 * Return: str
 */

char *string_toupper(char *str)
{
	int x;

	x = 0;

	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = str[x] - ('a' - 'A');
		}
		x++;
	}
	return (str);
}

