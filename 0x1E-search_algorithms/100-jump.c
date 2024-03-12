#include "search_algos.h"

/**
 * print_array - a function that prints an array of integers
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
}

/**
 * jump_search - a function that Searches for
 * a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: First index where value is located,
 * or -1 if value is not present or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump;

	if (!array)
		return (-1);
	jump = sqrt(size);
	for (i = 0; i < size; i += jump)
	{
		print_array(array + i, size - i);
		if (array[i] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
			for (size_t j = i - jump; j <= i; j++)
			{
				print_array(array + j, size - j);
				if (array[j] == value)
					return (j);
			}
			break;
		}
	}
	return (-1);
}
