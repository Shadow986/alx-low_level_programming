#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: the number to be checked.
 * @index: the index at which the bit is to be checked.
 *
 * Return: the value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	return ((n >> index) & 1);
}
