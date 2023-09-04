#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int x;
	int y;
	int cat;
	int len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0, len = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			len++;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	for (x = 0, cat = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++, cat++)
			str[cat] = av[x][y];
		str[cat++] = '\n';
	}
	str[cat] = '\0';
	return (str);
}
