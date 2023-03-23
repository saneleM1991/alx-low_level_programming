#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print all number passed as arguments
 * @separator: number separator
 * @n: number of rguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *chrp;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		chrp = va_arg(ptr, char *);

		if (separator ==  NULL)
		{
			if (chrp == NULL)
				printf("(nil)");
			else
				printf("%s", chrp);
		}
		else
		{
			if (i == (n - 1))
			{
				if (chrp == NULL)
					printf("(nil)");
				else
					printf("%s", chrp);
			}
			else
			{
				if (chrp == NULL)
					printf("(nil)%s", separator);
				else
					printf("%s%s", chrp, separator);
			}
		}
	}
	printf("\n");
	va_end(ptr);
}
