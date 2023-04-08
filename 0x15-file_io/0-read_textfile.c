#include "main.h"
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdlib.h>

/**
 * read_textfile - read text file
 * @filename: file name to read
 * @letters: number of chars to read
 * Return: number of byte read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nbyte_r;
	ssize_t nbyte_w;
	char *buffer = NULL;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0);
	if (fd < 0)
		return (0);

	buffer = (char *)malloc(sizeof(char) * letters);
	nbyte_r = read(fd, buffer, letters);
	if (nbyte_r > 0)
	{
		nbyte_w = write(STDOUT_FILENO, buffer, nbyte_r);
		if (nbyte_w != nbyte_r)
			return (0);

		return (nbyte_w);
	}
	else if (nbyte_r < 0)
	{
		return (0);
	}
	else
	{
		return (0);
	}
}



