#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @d: Digit to check
 * Return: Returns 1 if c is a digi / Returns 0 otherwise
 */
int _isdigit(int d)
{
	if (d >= '0' && d <= '9')
		return (1);
	else
		return (0);
}
