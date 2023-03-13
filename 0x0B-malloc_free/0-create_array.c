#include "main.h"
#include "stdlib.h"

/**
 * create_array - dynamicaly create an array on the heap
 * @size: size of tthe array
 * @c: Charactor to initialised the array
 * Return: NULL if size < 0 and if memory was not allocated
 */
char *create_array(unsigned int size, char c)
{
	if (size <= 0)
		return (NULL);

	char *p = (char *)malloc(sizeof(char) * size);

	if (p != NULL)
	{
		for (int i = 0; i < size; i++)
		{
			p[i] = c;
		}
		return (p);
	}

	return (NULL);
}
