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
	if (a != NULL && b != NULL)
	{
		int x;

		x = *a;
		*a = *b;
		*b = x;
	}
}
