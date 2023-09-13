#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		return (1);
	}
	switch (argv[2][0])
	{
		case '+':
			op_func = op_add;
			break;
		case '-':
			op_func = op_sub;
			break;
		case '*':
			op_func = op_mul;
			break;
		case '/':
			op_func = op_div;
			break;
		case '%':
			op_func = op_mod;
			break;
		default:
			printf("Error\n");
			return (1);
	}
	result = op_func(num1, num2);
	printf("%d\n", result);
	return (0);
}
