#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 or 2 on error
 */
int main(int argc, char *argv[])
{
	int x, bytes;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (char *)main;
	for (x = 0; x < bytes; x++)
	{
		printf("%02hhx", ptr[x]);
		if (x < bytes - 1)
			printf(" ");
		else
		       	printf("\n");
	}
	return (0);
}
