#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int compute_second(char *str, int len);
int compute_third(char *str, int len);
int compute_fourth(char *str, int len);
int compute_fifth(char *str, int len);
int compute_sixth(char *str, int len);

/**
 * main - This function  will generate a key for the crackme5 program
 * @argc: Number of arguments that were passed
 * @argv: Arguments that were passed
 * Return: 0 if successful, otherwise 1
 */
int main(int argc, char *argv[])
{
	char *username = NULL;
	char key[7] = {0};
	int unknown_len = 0;
	char *passwd_ptr = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjuk";

	if (argc == 2)
	{
		username = "julien";
		while (username[unknown_len] != '\0')
			unknown_len++;

		key[0] = passwd_ptr[(unknown_len ^ 59) & 63];
		key[1] = passwd_ptr[compute_second(username, unknown_len)];
		key[2] = passwd_ptr[compute_third(username, unknown_len)];
		key[3] = passwd_ptr[compute_fourth(username, unknown_len)];
		key[4] = passwd_ptr[compute_fifth(username, unknown_len)];
		key[5] = passwd_ptr[compute_sixth(username, unknown_len)];

		printf("%s\n", key);
	}
	else
	{
		printf("Usage: %s username\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}

/**
 * compute_second - this function will compute the second
 * character in the key for the given username
 * @str: Variable for username
 * @len: Length for username
 * Return: Calculated character
 */
int compute_second(char *str, int len)
{
	int comp_1, comp_2, y;

	comp_1 = 0;
	comp_2 = 0;

	while (comp_2 < len)
	{
		y = str[comp_2];
		comp_1 = comp_1 + y;
		++comp_2;
	}

	return ((comp_2 ^ 79) & 63);
}

/**
 * compute_third - this will compute the third
 * character in the key for the given username
 * @str: Variable for username
 * @len: Length for username
 * Return: Calculated character
 */
int compute_third(char *str, int len)
{
	int comp_1, comp_2, y;

	comp_1 = 1;
	comp_2 = 0;

	while (comp_2 < len)
	{
		y = str[comp_2];
		comp_1 = y * comp_1;
		++comp_2;
	}

	return ((comp_1 ^ 85) & 63);
}

/**
 * compute_fourth - this will compute the fourth
 * character in the key for the given username
 * @str: Variable for username
 * @len: Length for username
 * Return: Calculated character
 */
int compute_fourth(char *str, int len)
{
	int comp_1, comp_2;
	int x, z, rdi10, n;

	comp_1 = str[0];
	comp_2 = 0;

	while (comp_2 < len)
	{
		x = str[comp_2];

		if (x > comp_1)
		{
			z = str[comp_2];
			comp_2 = z;
		}

		++comp_2;
	}

	rdi10 = comp_1 ^ 14;
	*(&rdi10 + 4) = 0;
	srand(rdi10);
	n = rand();

	return (n & 63);
}

/**
 * compute_fifth - this will compute the fifth
 * character in the key for the given username
 * @str: Variable for username
 * @len: Length for username
 * Return: Calculated character
 */
int compute_fifth(char *str, int len)
{
	int comp_1, comp_2;
	int x, b, k;

	comp_1 = 0;
	comp_2 = 0;

	while (comp_2 < len)
	{
		x = str[comp_2];
		b = str[comp_2];
		comp_1 = comp_1 + b * x;
		++comp_2;
	}

	k = comp_1;
	k = k ^ 0xef;

	return (k & 63);
}

/**
 * compute_sixth - this will compute the sixth
 * character in the key for the given username
 * @str: Variable for username
 * @len: Length for username
 * Return: Calculated character
 */
int compute_sixth(char *str, int len)
{
	int comp_1, comp_2, n;
	(void)len;
	comp_1 = 0;
	comp_2 = 0;

	while (str[0] > comp_2)
	{
		n = rand();
		comp_1 = n;
		++comp_2;
	}

	comp_1 ^= 0xe5;

	return (comp_1 & 63);
}
