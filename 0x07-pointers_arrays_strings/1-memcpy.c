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
	for (int i = 0; i < n; i++)
	{
		*dest = *src;
		src++;
		dest++;
	}

	return (dest);
}
