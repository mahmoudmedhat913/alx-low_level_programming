#include "main.h"

/**
 * puts2 - Write a function that prints every other
 * character of a string, starting with the first character,
 * followed by a new line.
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int len = 0;
	int x = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	x = len - 1;
	for (i = 0 ; i <= x ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
