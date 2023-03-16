#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory and return pointer
 * @b: number of byte to allocate
 * Return: Void pointer to newly allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
