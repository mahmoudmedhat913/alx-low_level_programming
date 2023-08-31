#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: first integer
 * @m: second integer
 * Return: no. changed bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, y = n ^ m;
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		x = y >> i;
		if (x & 1)
			count++;
	}
	return (count);
}
