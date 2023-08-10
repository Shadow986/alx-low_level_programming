#include <stdio.h>
/**
 * main - Entry point: program that prints the size of various computer types
 * Return: Always 0 (succss)
 */
int main(void)
{
	char 1;
	int 4;
	long int 4;
	long long int 8;
	float 4;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(1));
printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(4));
printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(4));
printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(8));
printf("size of fload: %lu byte(s)\n", (unsigned long)sizeof(4));
return (0);
}
