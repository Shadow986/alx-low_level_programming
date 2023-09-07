#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: the minimum value (inclusive)
 * @max: the maximum value (inclusive)
 * Return: pointer to the newly created array,
 * or NULL if min > max or malloc fails
 */

int *array_range(int min, int max)
{
	int *arr;
	int x;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (!arr)
		return (NULL);
	for (x = 0; min <= max; x++, min++)
		arr[x] = min;

	return (arr);
}
