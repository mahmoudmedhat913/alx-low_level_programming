#include "main.h"

/**
 * print_rev - Write a function that prints a string, in reverse,
 * followed by a new line
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (i = len ; i > 0 ; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
