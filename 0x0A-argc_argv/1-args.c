#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints the num of args entered
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: Everytime 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv; /* Suppress unused parameter warning */
	printf("%d\n", argc - 1);

	return (0);
}
