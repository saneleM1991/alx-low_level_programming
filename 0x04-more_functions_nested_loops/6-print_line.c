#include "main.h"

/**
 * void print_line - draws a straight line in the terminal.
 * @n: lenght of a line to draw
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
