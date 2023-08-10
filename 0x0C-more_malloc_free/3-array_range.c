#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers.
 * @min: minimum range of values
 * @max: maximum range of values
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *p, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		p[i] = min++;
	return (p);
}
