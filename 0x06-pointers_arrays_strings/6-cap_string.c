#include "main.h"

/**
 * cap_string - a function that capitalizes
 * all words in a string
 * @str: The input string
 * Return: changed string
 */

char *cap_string(char *str)
{
	int x;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= ('a' - 'A');

	for (x = 1; str[x] != '\0'; x++)
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			if (
					str[x - 1] == ' ' || str[x - 1] == '\t' || str[x - 1] == '\n' ||
					str[x - 1] == ',' || str[x - 1] == ';' || str[x - 1] == '.' ||
					str[x - 1] == '!' || str[x - 1] == '?' || str[x - 1] == '"' ||
					str[x - 1] == '(' || str[x - 1] == ')' || str[x - 1] == '{' ||
					str[x - 1] == '}')
			{
				str[x] -= ('a' - 'A');
			}
		}
	}
	return (str);
}
