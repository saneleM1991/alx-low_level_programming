#include "main.h"

/**
 * set_bit - set a bit 1 at a given index
 * @n: value to change a bit
 * @index: index to set bit to
 * Return: 1 successes | -1 fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int mask = 1 << index;

	*n |= mask;

	return (1);
}
