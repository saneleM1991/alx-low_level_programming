#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Printing all elements in a list
 * @h: Pointer to head node
 * Return: Number of nodes in alist
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count += 1;
	}

	return (count);
}
