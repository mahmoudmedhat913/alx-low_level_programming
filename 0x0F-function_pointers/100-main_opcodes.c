#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function.
 * @argc: no. of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *array;
	int byte, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}	
	array = (char *)main;
	for (i = 0; i < byte; i++)
	{
		if (i == byte - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
	}
	return (0);
}
