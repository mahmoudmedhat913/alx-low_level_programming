#include "main.h"

/**
 * _strlen - calculate the length of string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - function that creates a file.
 * @filename: name of file
 * @text_content: text to write
 * Return: 1 or -1 for fail
 */

int create_file(const char *filename, char *text_content)
{
	int x;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	x = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (x == -1)
		return (-1);
	if (len)
		bytes = write(x, text_content, len);
	close(x);
	return (bytes == len ? 1 : -1);
}
