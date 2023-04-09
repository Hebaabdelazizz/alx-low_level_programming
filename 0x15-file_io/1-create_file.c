#include "main.h"

/**
* create_file - creates a file
* @filename: name of the file to be created
* @text_content: a NULL terminated string to write to the file
*
* Return: 1 if successful, -1 if failed
*/
int create_file(const char *filename, char *text_content)
{
	int fd, v;
	int w = 0;

	if (!filename)
		return (-1);

	if (!text_content)
	{
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		if (fd == -1)
			return (-1);
		close(fd);
		return (1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[w])
		w++;

	v = write(fd, text_content, w);
	if (v == -1)
		return (-1);

	close(fd);

	return (1);
}
