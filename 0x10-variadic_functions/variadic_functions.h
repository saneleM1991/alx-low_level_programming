#ifndef VARIADIC_F
#define VARIADIC_F
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct format - Data type of a format.
 * @op: Format.
 * @f: Function.
 *
 */
typedef struct format
{
	char *op;
	void (*f)(va_list all);
} f;

#endif
