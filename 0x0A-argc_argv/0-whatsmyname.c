#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints the name of the program
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: Everytime 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	if (argv[0] != NULL)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
