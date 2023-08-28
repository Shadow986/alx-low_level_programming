#include "main.h"

/**
 * set_string - a function that sets
 * the value of a pointer to a char
 * @s: A pointer to a pointer
 * @to: A pointer to a char whose value is to be assigned.
 */

void set_string(char **s, char *to)
{
	if (s != 0)
		*s = to;
}
