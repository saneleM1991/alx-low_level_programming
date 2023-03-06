#include "main.h"
/**
 * _memset - set data memory for s using b
 * @s: String to set to
 * @b: Charector to set
 * @n: number of byte t set
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
