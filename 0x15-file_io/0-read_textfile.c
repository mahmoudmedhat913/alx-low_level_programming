#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: name of readed bytes
 * @letters: no. of readed bytes
 * Return: no. of printed bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t bytes;
	char buf[READ_BUFF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	bytes = read(x, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(x);
	return (bytes);
}
