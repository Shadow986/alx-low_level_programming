#include "main.h"

/**
 * binary_to_uint - a function that converts
 * a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 characters.
 * Return: The converted number, or
 * 0 if there is an invalid character or b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int x = 0;

	if (b == NULL)
		return (0);

	for (; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[X] != '1')
			return (0);
		result = result * 2 + (b[X] - '0');
	}
	return (result);
}
