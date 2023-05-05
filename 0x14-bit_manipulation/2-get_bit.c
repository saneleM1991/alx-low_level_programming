#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: value to get bit from
 * @index: possition of the bit
 * Return: a bit at a specific possion
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return ((n >> index) & 1);
}
