#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary to convert
 * Return: 0 fail | null - binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int length = 0;
	int i;

	if (b == NULL)
		return (0);

	if (!is_binary(b))
		return (0);

	length = strlen(b);
	for (i = 0; i < length; i++)
	{
		if (b[length - 1 - i] == '1')
			result += (int)_pow(2, i);
	}

	return (result);
}

/**
 * is_binary - check the string if its only 0s and 1s
 * @str: string to check
 * Return: 1 success | 0 fail
 */
int is_binary(const char *str)
{
	while (*str != '\0')
	{
		if (*str != '0' && *str != '1')
			return (0);
		str++;
	}
	return (1);
}

/**
 * _pow - maths power function
 * @base: base number
 * @exponent: exponent number
 * Return: result
 */
double _pow(double base, int exponent)
{
	double result = 1.0;
	int i;

	if (exponent < 0)
	{
		base = 1.0 / base;
		exponent = -exponent;
	}

	for (i = 0; i < exponent; i++)
	{
		result *= base;
	}

	return (result);
}
