#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets 10 time each line
 */
void print_alphabet_x10(void)
{
	int count = 10;
	char letter;

	while (count < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar('letter');
			letter++;
		}

		_putchar('\n');
		count++;
	}
}
