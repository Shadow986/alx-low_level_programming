#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - a function that prints the sum
 * of two diagonals of a square matrix of integers
 * @a: input
 * @size: input
 * Return: Everytime 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int sumx, sumy, i;

	sumx = 0;
	sumy = 0;

	for (i = 0; i < size; i++)
	{
		sumx = sumx + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sumy += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sumx, sumy);
}
