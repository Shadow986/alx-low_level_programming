#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: the number of elements in the array
 * @size: the size of each element in bytes
 * Return: the pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	for (x = 0; x < nmemb * size; x++)
		memory[x] = 0;

	return (memory);
}
