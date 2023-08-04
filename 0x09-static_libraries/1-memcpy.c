#include "main.h"

/**
 * *_memcpy - Write a function that copies memory area.
 * @dest: stored memory
 * @src: copied memory
 * @n: number of bytes
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int x = n;

	while (i < x)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	return (dest);
}
