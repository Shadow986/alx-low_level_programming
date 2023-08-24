#include <stdio.h>

int main(void)
{
	int x;
	int y[5];
	int *p;

	y[2] = 1024;
	p = &x;

	/*
	 * write your line of code here...
	 * Remember:
	 * not allowed to use y
	 * not allowed to modify p
	 * only one statement
	 * you are not allowed to code anything else than this line of code
	 */

	*(p + 5) = 98;

	/* ...so that this prints 98\n */

	printf("y[2] = %d\n", y[2]);
	return (0);
}
