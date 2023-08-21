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

	if (s == NULL)
		return;
	while (s[len] != '\0')
		len++;

	int i;

	for (int i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
