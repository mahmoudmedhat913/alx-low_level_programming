#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (Success)
 */

int main(void)
{
	char num = '0';

	char c = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
