#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int x = 0;
	char *str;
	char current_char;

	va_start(args, format);
	while (format && format[x])
	{
		current_char = format[x];

		if (current_char == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (current_char == 'x')
		{
			printf("%d", va_arg(args, int));
		}
		else if (current_char == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (current_char == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
		}
		x++;
		if (format[x] && (current_char == 'c' || current_char == 'x' ||
					current_char == 'f' || current_char == 's'))
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
