#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 on error
 */

int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (int x = 0; argv[1][x]; x++)
		if (argv[1][x] < '0' || argv[1][x] > '9')
		{
			printf("Error\n");
			exit(98);
		}
	for (int x = 0; argv[2][x]; x++)
		if (argv[2][x] < '0' || argv[2][x] > '9')
		{
			printf("Error\n");
			exit(98);
		}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;

	printf("%d\n", product);
	return (0);
}
