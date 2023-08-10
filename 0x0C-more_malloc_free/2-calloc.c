#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fill memory with constant byte
 * @s: memory area
 * @b: char
 * @n: no. of times to copy s
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * *_calloc - function that allocates memory
 * for an array, using malloc.
 * @nmemb: no. of elements in the array
 * @size: size of each element
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
