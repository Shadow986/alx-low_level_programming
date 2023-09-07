#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat -  a function that concatenates two strings.
 * @s1: the string to append to
 * @s2: the string to concatenate from
 * @n:the number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int len_s1 = 0, len_s2 = 0, x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len_s1])
		len_s1++;
	while (s2[len_s2])
		len_s2++;

	if (n >= len_s2)
		concat_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	else
		concat_str = malloc(sizeof(char) * (len_s1 + n + 1));
	if (concat_str == NULL)
		return (NULL);
	for (x = 0; x < len_s1; x++)
		concat_str[x] = s1[x];
	for (x = 0; x < n && x < len_s2; x++)
		concat_str[len_s1 + x] = s2[x];
	concat_str[len_s1 + x] = '\0';
	return (concat_str);
}
