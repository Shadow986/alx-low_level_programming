#include <stdio.h>

/**
 * main - The main function of the program.
 *
 * This is the entry point of the program. It prints a message indicating
 * that it is the main function.
 *
 * Return: Always 0 (indicating success).
 */
void customInitializer(void) __attribute__ ((constructor));

/**
 * first - a function that prints a sentence before the main
 * function is executed
 */
void customInitializer(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
