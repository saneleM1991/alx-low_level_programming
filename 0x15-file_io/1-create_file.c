#include "main.h"
#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>
#include <fcntl.h>

/**
 * create_file - create a file
 * @filename: filename to create
 * @text_content: content to writen on the file
 * Return: 1 on succusses | -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int content_len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	content_len = _str_len(text_content);
	if ((write(fd, text_content, content_len)) == content_len)
	{
		close(fd);
		return (1);
	}
	else
	{
		return (-1);
		close(fd);
	}

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
