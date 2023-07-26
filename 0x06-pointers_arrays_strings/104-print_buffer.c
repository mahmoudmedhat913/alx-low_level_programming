#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Write a function that prints a buffer.
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int x, i, j;

	x = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (x < size)
	{
		j = size - x < 10 ? size - x : 10;
		printf("%08x: ", x);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + x + i));
			else
				printf("  ");
			if (i % 2)
				printf(" ");
		}
		for (i = 0; i < j; i++)
		{
			int y = *(b + x + i);

			if (y < 32 || y > 132)
				y = '.';
			printf("%c", y);
		}
		printf("\n");
		x += 10;
	}
}
