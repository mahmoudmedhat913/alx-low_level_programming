#include "main.h"

/**
 * print_binary - print binary representation of number
 * @n: number
 */

void print_binary(unsigned long int n)
{
	unsigned long int curr;
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		curr = n >> i;
		if (curr & 1)
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
