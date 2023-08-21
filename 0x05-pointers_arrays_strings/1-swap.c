#include "main.h"

/**
 * swap_int - a function that swaps the value
 * of two integers
 * @a: integer to swap
 * @b: integer to swap
 * Return Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a; //assigns the value of the first integer
	*a = *b;
	*b = x;
}
