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
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("size of a int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(w));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(u));
printf("size of a fload: %lu byte(s)\n", (unsigned long)sizeof(z));
return (0);
}
