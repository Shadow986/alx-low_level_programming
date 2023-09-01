#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a function that prints the minimum number
 * of coins to make change for an amount of money
 * @argc: the number of arguments given
 * @argv: the array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int x, y, answer;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	answer = 0;

	if (x < 0)
	{
		printf("0\n");
		return (0);
	}
	for (y = 0; y < 5 && x >= 0; y++)
	{
		while (x >= coins[y])
		{
			answer++;
			x -= coins[y];
		}
	}
	printf("%d\n", answer);
	return (0);
}
