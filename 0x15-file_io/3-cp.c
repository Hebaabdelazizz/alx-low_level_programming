#include "main.h"

/**
* main - a program that copies the content of a file to anothe file
* @argc: arguments
* @argv: arguments validator
* Return: returns 0 if successful, else exits on error
*/
int main(int argc, char *argv[])
{
	int v = 0;
	int w, n1, fd_from, fd_to, *fd1_ptr = &fd_from, *fd2_ptr = &fd_to;
	char *buf, **buf_ptr = &buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	buf = malloc(sizeof(char) * 1024);
	if (!buf)
		return (-1);

	do {
		w = read(fd_from, buf, 1024);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		n1 = write(fd_to, buf, w);
		if (n1 != w)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		v++;
	} while (w == 1024);

	free_close(buf_ptr, fd1_ptr, fd2_ptr);

	return (0);
}

void free_close(char **buf, int *fd1, int *fd2)
{
	int w, n1;

	free(*buf);
	w = close(*fd1);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *fd1);
		exit(100);
	}
	n1 = close(*fd2);
	if (n1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *fd2);
		exit(100);
	}
}
