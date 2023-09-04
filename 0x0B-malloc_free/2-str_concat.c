#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: the first string to concat
 * @s2: the second string to concat
 * Return: pointer to the concatenated string, or NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int x;
	unsigned int y;
	unsigned int cat1 = 0, cat2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[cat1])
		cat1++;
	while (s2[cat2])
		cat2++;

	concat = malloc((cat1 + cat2 + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);
	for (x = 0; x < cat1; x++)
		concat[x] = s1[x];
	for (y = 0; y < cat2; y++)
		concat[x + y] = s2[y];
	concat[cat1 + cat2] = '\0';
	return (concat);
}
