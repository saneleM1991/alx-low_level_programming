#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: Number to get last digit
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int printlsd;

	printlsd = (n % 10);

	if (printlsd < 0)
		printlsd = (-1 * printlsd);

	_putchar(printlsd + '0');
	return (printlsd);
}
