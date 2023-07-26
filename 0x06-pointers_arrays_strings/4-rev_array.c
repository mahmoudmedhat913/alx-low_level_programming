#include "main.h"

/**
 * reverse_array - Write a function that reverses
 * the content of an array of integers.
 * @a: array
 * @n: number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	while (i < n--)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
	}
}
