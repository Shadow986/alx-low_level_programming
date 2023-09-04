#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns
 * a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: the string to duplicate
 * Return: pointer to the duplicated string, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int x, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;
	duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	for (x = 0; x < length; x++)
		duplicate[x] = str[x];
	duplicate[length] = '\0';

	return (duplicate);
}
