#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * int_index - a function that searches for an integer
 * @array: Array to search to
 * @size: Size of the array
 * @cmp: fucntion to compera values
 * Return: index (found) / -1 ( not found)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
