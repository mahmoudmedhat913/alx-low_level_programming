#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number
 * of coins to make change for an amount of money.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 for success and 1 for error
 */

int main(int argc, char *argv[])
{
	int num, i, res;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	res = 0;
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	i = 0;
	while (i < 5 && num >=0)
	{
		while (num >= coin[i])
		{
			res++;
			num -= coin[i];
		}
		i++;
	}
	printf("%d\n", res);
	return (0);
}
