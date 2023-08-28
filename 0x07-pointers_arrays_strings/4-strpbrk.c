#include "main.h"

/**
 * _strpbrk - a function that searches a string of
 * any byte from 'accept' in 's'
 * @s: The string to search
 * @accept: The bytes to search for
 * Return: Always 0 (success)
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	for (; *s != '\0'; s++)
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
	}
	return ('\0');
}
