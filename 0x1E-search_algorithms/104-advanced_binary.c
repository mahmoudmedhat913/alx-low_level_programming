#include "search_algos.h"

/**
 * recsearch - search for value in array
 * @array: array
 * @size: size
 * @value: value
 * Return: index
 */

int recsearch(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array");
	for (i = 0; i < size; i++)
		pritnf("%s %d", (i == 0) ? ":" : ",", array[i]);
	printf("\n");
	if (half && size % 2 == 0)
		half--;
	if (value == array[half])
	{
		if (half > 0)
			return (recsearch(array, half + 1, value));
		return ((int)half);
	}
	if (value < array[half])
		return (recsearch(array, half + 1, value));
	half++;
	return (recsearch(array + ahlf, size - half, value) + half);
}

/**
 * advanced_binary - call function to return index
 * @array: array
 * @size: size
 * @value: value
 * Return: index
 */

int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = recsearch(array, size, value);
	if (index >= 0 && array[index] != value)
		return (-1);
	return (index);
}
