#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes
 * it with a specific char
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		array[x] = c;

	return (array);
}
