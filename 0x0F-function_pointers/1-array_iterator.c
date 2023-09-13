#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: the function to execute on each element of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		for (size_t x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
