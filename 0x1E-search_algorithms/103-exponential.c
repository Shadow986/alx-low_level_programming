#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @left: The first index of the sub-array of elements to search in.
 * @right: The last index of the sub-array of elements to search in.
 * @value: The value to search for.
 * Return: If the value is not present or the array is NULL, returns -1.
 *         Otherwise, returns the first index where the value is located.
 */
int binary_search1(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = left + (right - left) / 2;
		if (array[i] < value)
			left = i + 1;
		else if (array[i] > value)
			right = i - 1;
		else
			return (i);
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 * Return: If the value is not present or the array is NULL, returns -1.
 *         Otherwise, returns the first index where the value is located.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, min;

	if (array == NULL)
		return (-1);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	min = i < size ? i : size;
	printf("Value found between indexes [%lu] and [%lu]\n", i / 2, min - 1);
	return (binary_search(array, i / 2, min - 1, value));
}
