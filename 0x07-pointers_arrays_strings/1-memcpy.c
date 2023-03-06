#include "main.h"
/**
 * _memcpy - Copying form src to dest
 * @dest: Buffer to copy to
 * @src: Buffer to copy form
 * @n: Number of byte to copy
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
