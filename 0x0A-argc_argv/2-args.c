#include "main.h"
#include <stdio.h>

/**
 * main - a function that prints all the arg it recieves
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: Everytime 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x;

	x = 0;

	for (; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
