#include <stdio.h>
/**
 * main - Entry point: program that prints the size of various computer types
 * Return: Always 0 (succss)
 */
int main(void)
{
	char x;
	int y;
	long int w;
	long long int u;
	float z;
printf("Size of a char: %lu byte(s)\n", sizeof(x));
printf("size of int: %lu byte(s)\n", sizeof(y));
printf("size of long int: %lu byte(s)\n"' sizeof(w));
printf("size of long long int: %lu byte(s)\n", sizeof(u));
printf("size of fload: %lu byte(s)\n", sizeof(z))
return (0);
}
