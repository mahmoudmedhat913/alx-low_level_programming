#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *x;
	int i, z;

	i = 0;
	z = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	x = malloc(sizeof(char) * (i + 1));
	if (x == NULL)
		return (NULL);
	while (str[z])
	{
		x[z] = str[z];
		z++;
	}
	return (x);
}
