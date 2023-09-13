#include "function_pointers.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * asked by the user
 * @s: the operator passed as an argument to the program
 *
 * Return: pointer to the corresponding function, NULL if no match
 */
int (*get_op_func(char *s))(int, int)
{
	int x;
	operation_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
	};

	x = 0;
	while (x < 5)
	{
		if (*(ops[x].op) == *s && *(s + 1) == '\0')
			return (ops[x].f);
		x++;
	}

	return (NULL);
}
