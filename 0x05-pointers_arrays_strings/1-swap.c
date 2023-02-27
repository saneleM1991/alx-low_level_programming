#include "main.h"

/**
 * swap_int - Swap values
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int temp_a = *a;

	*a = *b;
	*b = temp_a;
}
