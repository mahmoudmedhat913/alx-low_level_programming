#include "main.h"

/**
 * append_text_to_file - append text at the end of file
 * @filename: pointer
 * @text_content: string
 * Return: 1 of -1 for fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int length = 0, o, w;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, length);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
