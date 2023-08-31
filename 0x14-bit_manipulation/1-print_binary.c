#include "main.h"

/**
 * print_binary - function that prints
 * the binary representation of a number.
 * @n: long integer
 */

void print_binary(unsigned long int n)
{
	unsigned long int x;
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		x = n >> i;
		if (x & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
