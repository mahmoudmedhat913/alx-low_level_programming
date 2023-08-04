#include "main.h"
#include <stdio.h>

/**
 * _atoi - Write a function that convert a string to an integer
 * @s: converted string
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i = 0;
	int x = 0;
	int y = 0;
	int z = 0;
	int len = 0;
	int digit = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len && z == 0)
	{
		if (s[i] == '-')
		{
			++x;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (x % 2)
			{
				digit = -digit;
			}
			y = y * 10 + digit;
			z = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			z = 0;
		}
		i++;
	}
	if (z == 0)
	{
		return (0);
	}
	return (y);
}

/**
 * main - program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int res, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	res = num1 * num2;
	printf("%d\n", res);
	return (0);
}
