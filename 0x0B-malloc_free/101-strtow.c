#include "main.h"
#include <stdlib.h>

/**
 * word_count - a function that counts the number of words in a string
 * @str: the string to count
 * Return: the number of words in the string
 */

int word_count(char *str)
{
	int x, count = 0, in_word = 0;

	for (x = 0; str[x]; x++)
	{
		if (str[x] == ' ')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
	}
	return (count);
}

/**
 * strtow - a function that splits a string into words
 * @str: the string to split
 * Return: pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	int x, y, k, count, len, in_word = 0;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	count = word_count(str);
	if (count == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);
	for (x = 0, k = 0; str[x]; x++)
	{
		if (str[x] == ' ')
			in_word = 0;
		else
		{
			if (in_word == 0)
			{
				for (y = x, len = 0; str[y] && str[y] != ' '; y++, len++)
					;
				words[k] = malloc(sizeof(char) * (len + 1));
				if (words[k] == NULL)
				{
					while (--k >= 0)
						free(words[k]);
					free(words);
					return (NULL);
				}
				for (y = x; str[y] && str[y] != ' '; y++)
					words[k][y - x] = str[y];
				words[k][y - x] = '\0';
				k++;
			}
			in_word = 1;
		}
	}
	words[k] = NULL;
	return (words);
}
