#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - dynamicaly create an array on the heap
 * @size: size of tthe array
 * @c: Charactor to initialised the array
 * Return: NULL if size < 0 and if memory was not allocated
 */
char *create_array(unsigned int size, char c)
{
	char *p;

	if (size <= 0)
		return (NULL);

	p = (char *)malloc(size * sizeof(char));
	unsigned int i = 0;

	if (p != NULL)
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		return (p);
	}

	return (NULL);
}
