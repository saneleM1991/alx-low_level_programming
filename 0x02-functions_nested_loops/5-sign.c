#include "main.h"
/**
 * print_sign - Prints the sign of the input
 * @n: Input to print
 * Return: 1 / 0 / -1 Depending on the input
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
