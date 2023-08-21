#include "main.h"

/**
 * rev_string - a function that reverse a string
 * @s: input the string
 * Return: the string in reverse
 */

void rev_string(char *s)
{
	int len = 0;
	char temp;
	int i = 0;

	if (s == NULL)
		return;

	while (s[len] != '\0')
		len++;

	while (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
	}
}
