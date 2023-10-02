#include "main.h"

/**
 * create_file - function that create file
 * @filename: pointer
 * @text_content: pointer
 * Return: 1 or -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, length);
	if (fd == -1 || w == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
