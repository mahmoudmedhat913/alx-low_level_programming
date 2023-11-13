#include "main.h"

/**
 * *_memset - Write a function that fills memory with a constant byte.
 * @s: starting address of memory to be filled
 * @b: the wanted value
 * @n: the number of changed bytes
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
