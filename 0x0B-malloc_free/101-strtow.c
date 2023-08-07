#include "main.h"
#include <stdlib.h>

/**
 * count_word - function to count no. of words
 * @str: string to evaluate
 * Return: number of words
 */

int count_word(char *str)
{
	int flag, x, i;

	flag = 0;
	x = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			x++;
		}
	}
	return (x);
}

/**
 * **strtow - function that splits a string into words.
 * @str: string to split
 * Return: pointer to an aray of strings for success
 * and null for error
 */

char **strtow(char *str)
{
	char **matrix, *x;
	int i, y, len, word, z, start, end;

	y = 0;
	len = 0;
	z = 0;
	while (*(str + len))
		len++;
	word = count_word(str);
	if (word == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (word + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (y)
			{
				end = i;
				x = (char *) malloc(sizeof(char) * (y + 1));
				if (x == NULL)
					return (NULL);
				while (start < end)
					*x++ = str[start++];
				*x = '\0';
				matrix[z] = x - y;
				z++;
				y = 0;
			}
		}
		else if (y++ == 0)
			start = i;
	}
	matrix[z] = NULL;
	return (matrix);
}
