#include "main.h"
#include <stdio.h>

/**
 * print_array -a function that prints n elements
 * of an array of integers
 * @n: the number of elements of the arrays to be
 * printed
 * @a: arry name
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < (n - 1); x++)
	{
		printf("%d", a[x]);
	}
	if (x == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf('\n')
}
