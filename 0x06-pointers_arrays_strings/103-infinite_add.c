#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: The string to reverse
 * Return: s
 */
char rev_string(char *s)
{
	int i, length;
	char tmp;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
		length++;

	for (i = 0; i < length; i++)
	{
		tmp = s[i];
		s[i] = s[length - 1];
		s[length - 1] = tmp;
		length--;
	}
	return (*s);
}

/**
 * *infinite_add - Write a function that adds two numbers.
 * @n1: input value
 * @n2: input value
 * @r: input value
 * @size_r: input value
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temptot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		temptot = val1 + val2 + overflow;
		if (temptot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temptot % 10) + '0';
		digits++;
		i--;
		j--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
