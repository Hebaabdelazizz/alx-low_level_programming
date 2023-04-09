#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: is the NULL terminated string to add the end of the file
 *
 * Return: 1 if it succeeds, -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int v, w, x = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (x = 0; text_content[x];)
			x++;
	}

	v = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, x);

	if (v == -1 || w == -1)
		return (-1);

	close(v);

	return (1);
}

