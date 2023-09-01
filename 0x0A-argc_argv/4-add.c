#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - a function that check
 * if a string represents a positive number
 * @str: The string to check
 * Return: 1 if the string is a positive number,
 * butr if not then return 0
 */
int is_positive_number(char *str)
{
	int x = 0;

	while (str[x])
	{
		if (str[x] < '0' || str[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int x;
	int y = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		if (is_positive_number(argv[x]))
		{
			int cat = atoi(argv[x]);

			y += cat;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", y);
	return (0);
}
