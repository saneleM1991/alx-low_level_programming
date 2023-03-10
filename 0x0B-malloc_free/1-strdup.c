#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - put the string in the allocated memory
 * @str: String to paste
 * Return: pointer to new allocatted string / NULL
 */
char *_strdup(char *str)
{
	unsigned int string_len;
	char *c;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	string_len = strlen(str) + 1;
	c = (char *)malloc(sizeof(char) * string_len);

	if (c != NULL)
	{
		for (i = 0; i < string_len; i++)
		{
			c[i] = str[i];
		}
		return (c);
	}
	return (NULL);
}
