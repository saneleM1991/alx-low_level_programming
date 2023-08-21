#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: string that is added to
 * @src: string to be appended
 * @n: the number of bytes from @src
 *
 * Return: a pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}