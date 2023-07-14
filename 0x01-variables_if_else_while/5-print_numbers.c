#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (Success)
 */

int main(void)
{
	char base = '0';

	while (base <= '9')
	{
		putchar(base);
		base++;
	}
	putchar('\n');
	return (0);
}
