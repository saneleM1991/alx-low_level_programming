#include "main.h"

/**
 * flip_bits - get number flips o get from one number to another
 * @n: number to check to
 * @m: number of flips
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return ((~n) | (~m) << 1);
}
