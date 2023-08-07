#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - function that concatenates all
 * the arguments of your program.
 * @ac: integer
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, x, y;

	x = 0;
	y = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			x++;
		}
	}
	x += ac;
	str = malloc(sizeof(char) * x + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[y] = av[i][j];
			y++;
		}
		if (str[y] == '\0')
		{
			str[y++] = '\n';
		}
	}
	return (str);
}
