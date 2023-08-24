#include "main.h"


/**
 * infinite_add - a fucntion that adds two numbers
 * @n1: char
 * @n2: char
 * @r: pointer to buffer size
 * @size_r: int
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x, y, k, a, b, n;

	for (x = 0; n1[x]; x++)
		;
	for (y = 0; n2[y]; y++)
		;
	if (x > size_r || y > size_r)
		return (0);
	b = 0;
	for (x -= 1, y -= 1, k = 0; k < size_r - 1; x--, y--, k++)
	{
		n = b;
		if (x >= 0)
			n += n1[x] - '0';
		if (y >= 0)
			n += n2[y] - '0';
		if (x < 0 && y < 0 && n == 0)
		{
			break;
		}
		b = n / 10;
		r[k] = n % 10 + '0';
	}
	r[k] = '\0';
	if (x >= 0 || y >= 0 || b)
		return (0);
	for (k -= 1, a = 0; a < k; k--, a++)
	{
		b = r[k];
		r[k] = r[a];
		r[a] = b;
	}
	return (r);
}
