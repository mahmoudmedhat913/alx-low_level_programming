#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read text file and print it to POSIX STDOUT
 * @filename: text file
 * @letters: no. of letters
 * Return: actual no. of letters it should read or 0 if null
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, w, r;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	close(fd);
	return (w);
}
