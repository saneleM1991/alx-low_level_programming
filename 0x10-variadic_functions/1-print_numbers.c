#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print all number passed as arguments
 * @separator: number separator
 * @n: number of rguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (separator ==  NULL)
		{
			printf("%d", va_arg(ptr, int));
		}
		else
		{
			if (i == (n - 1))
				printf("%d", va_arg(ptr, int));
			else
				printf("%d%s", va_arg(ptr, int), separator);
		}
	}
	printf("\n");
	va_end(ptr);
}
