#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - This function takes a name (a string)
 * and a function pointer as arguments.
 * @name_to_print: The name to be printed.
 * @print_function: A pointer to the function that will print the name.
 * Return: NULL
 **/

void print_name(char *name_to_print, void (*print_function)(char *))
{
	if (name_to_print == NULL || print_function == NULL)
		return();
	print_function(name_to_print);
}
