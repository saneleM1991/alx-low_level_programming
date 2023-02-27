#include "main.h"

/**
 * _strlen - Calculate the length of the string
 * @s: string to check the length
 * Return: return the length of the string
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}

	return (counter);
}
