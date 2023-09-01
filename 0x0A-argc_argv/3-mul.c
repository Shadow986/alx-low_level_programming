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
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", result);
	return (0);
}
