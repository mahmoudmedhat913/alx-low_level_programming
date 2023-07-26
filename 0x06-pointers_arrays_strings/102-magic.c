#include <stdio.h>

int main(void)
{
	int n, a[5], *p;

	a[2] = 1024;
	p = &n;
	/**
	 * You are not allowed to use the variable a
	 * You are not allowed to modify the variable p
	 * You can only write one statement
	 * You are not allowed to code anything else than the line of
	 * expected line of code at the expected line
	 */
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
