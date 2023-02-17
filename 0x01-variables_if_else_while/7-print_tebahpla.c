#include <stdio.h>

/**
 * main - programm entrypoint
 *
 * Return: 0 for Success.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
