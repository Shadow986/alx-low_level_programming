#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that converts a string to an integer
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: 0 (Success) or 1 (Error)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
