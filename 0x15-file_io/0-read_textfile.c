#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to STDOUT
 * @filename: the text file being read
 * @letters: the number of letters it should read
 * Return: the actual number of letters it could print and return
 * If the file cannot be opened or read, return 0
 * If filname is NULL return 0
 * If write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t v;
	ssize_t w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	w = read(fd, buf, letters);
	v = write(STDOUT_FILENO, buf, w);

	free(buf);
	close(fd);
	return (v);
}
