#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a[] = {4, 8, 15, 16, 23, 42};
	int *p = &a[0];

	*(p + 2) = 98;

	printf("a[2] = %d\n", a[2]);
	return (0);
}
