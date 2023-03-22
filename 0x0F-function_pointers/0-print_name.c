#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: A name to print
 * @f: A callback function to print name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
