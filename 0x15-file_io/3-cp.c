#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#define BUFFER_S 1024

/**
 * main - a program that copies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: arguments list
 * Return: 1 succusses | -1 fail
 */
int main(int argc, char *argv[])
{
	char buffer[BUFFER_S];
	int fd_from, fd_to;
	ssize_t byte_r;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY, 0);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((byte_r = read(fd_from, buffer, BUFFER_S)) > 0)
	{
		if (write(fd_to, buffer, byte_r) != byte_r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_fd(fd_from, fd_to);
			exit(99);
		}
	}

	close_fd(fd_from, fd_to);
	return (0);
}
/**
 * close_fd - handling close error
 * @fd_from: file discriptor fro file reading from
 * @fd_to: file discription for file copying to
 */
void close_fd(int fd_from, int fd_to)
{
	if (fd_from != 0 && fd_to != 0)
	{
		if (close(fd_from) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);

		if (close(fd_to) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
	}
	if (fd_from != 0 && fd_to == 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
	if (fd_from == 0 && fd_to != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
	exit(100);
}

