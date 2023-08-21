#include "main.h"
/**
 * _islower - Checks if charactor is lower uppercase letter
 * @c: char to check
 * Return: 1 for true / 0 for false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
