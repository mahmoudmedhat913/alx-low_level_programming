#include "main.h"
#include <stdio.h>

/**
 * main - print the sum of all the multiplies of 3 and 5 below 1024 (excluded)
 * Return: 0 (Success)
 */

int main(void)
{
	int sum, num;

	for (num = 0 ; num < 1024 ; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		{
			sum += num;
		}

	}
	printf("%d\n", sum);
	return (0);
}
