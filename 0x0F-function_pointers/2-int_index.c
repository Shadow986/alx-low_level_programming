#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer in an array
 * @array: the array to search in
 * @size: the number of elements in the array
 * @cmp: the function to be used to compare values
 * Return: index of the first element for which cmp function does not return 0,
 * -1 if no element matches or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp && size > 0)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
			{
				return (x);
			}
		}
	}
	return (-1);
}
