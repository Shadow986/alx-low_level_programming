#include "main.h"

/**
 * set_bit - a function that sets the value of a bit at a given index to 1.
 * @n: A pointer to the unsigned long int where the bit is to be set.
 * @index: The index (0-based) of the bit to set.
 * Return: 1 if the operation was successful, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 0 || index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n |= (1UL << index);
	return (1);
}
