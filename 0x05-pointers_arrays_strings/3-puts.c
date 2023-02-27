#include "main.h"

/**
 * _puts - Print a string to th std output
 * @str: String to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
