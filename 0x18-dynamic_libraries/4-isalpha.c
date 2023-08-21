#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Its checks for alphabetic character
 * @c: char to check
 * Return: Zero (0) If the parameter isn't an alpha
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
