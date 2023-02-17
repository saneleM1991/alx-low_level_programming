#include <stdio.h>
/**
 * main - Entrypoint for the application
 * Return: 0(Success)
 */
int main(void)
{
	char small_letter = 'a';
	char capital_letter = 'A';

	while (small_letter <= 'z')
	{
		putchar(small_letter);
		small_letter++;
	}
	while (capital_letter <= 'Z')
	{
		putchar(capital_letter);
		capital_letter++;
	}
	putchar('\n');

	return (0);
}
