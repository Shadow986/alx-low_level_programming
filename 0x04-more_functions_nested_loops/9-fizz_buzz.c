#include <stdio.h>
#include "main.h"

/**
 * main - A function that prints numbers from 1 to 100
 * but for multiples of three prints Fizz instead 
 * of the number
 * Buzz, and for multiples of boththree and five,
 * FizzBuzz.
 * Return: Everytime 0 (success)
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 !=0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0 && x % 3 != 0)
		{
			printf(" FizzBuzz");
		}
		else if (x == 1)
		{
			print("%d", x);
		}
	}
	printf("\n");
	return (0);
}