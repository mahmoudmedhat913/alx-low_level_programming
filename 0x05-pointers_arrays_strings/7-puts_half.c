#include "main.h"

/**
 * puts_half - Write a function that prints half of a string,
 * followed by a new line.
 * @str: input
 * Return: half the input
 */

void puts_half(char *str)
{
	int len = 0;
	int i, x;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		len++;
	}
	x = len / 2;
	if ((len % 2) == 1)
	{
		x = ((len + 1) / 2);
	}
	for (i = x ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
