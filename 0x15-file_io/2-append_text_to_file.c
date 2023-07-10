#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - append content to the file
 * @filename: filename to append to
 * @text_content: content to append
 * Return: 1 successes | -1 fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int c_len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		c_len = _str_len(text_content);
		write(fd, text_content, c_len);
	}

	close(fd);
	return (1);
}

/**
 * _str_len - checking length of the string
 * @str: string to check
 * Return: string lenght
 */
int _str_len(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}
