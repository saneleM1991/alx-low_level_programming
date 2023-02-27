#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i <= (n - 1))
	{
		if (i == (n - 1))
		{
			printf("%d ", a[i]);
			break;
		}
		printf("%d, ", a[i]);
		i++;
	}
	printf("\n");
}
