#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 */
void print_most_numbers(void)
{
	char n = '0';

	while (n <= '0')
	{
		if (n != '2' && n != '4')
			_puchar(n);
		n++;
	}
}
