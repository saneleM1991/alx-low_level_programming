#include "function_pointers.h"
/**
 * array_iterator - a function that executes on each element of an array
 * @array: An array
 * @size: size of the array
 * @action: a fucntion to execute for each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[0]);
	}
}
