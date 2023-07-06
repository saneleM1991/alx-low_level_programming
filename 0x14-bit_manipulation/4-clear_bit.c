#include "main.h"

/**
 * clear_bit - clear bit to 0 at a given possion
 * @n: value to change bit form
 * @index: bit index
 * Return: 1 if it worked, or -1 if an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
