#include "main.h"

/**
 * flip_bits - return no. of bits you need
 * to flip to get from no. to another
 * @n: first no.
 * @m: second no.
 * Return: no. of changed bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int curr, x = n ^ m;
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		curr = x >> i;
		if (curr & 1)
			count++;
	}
	return (count);
}
