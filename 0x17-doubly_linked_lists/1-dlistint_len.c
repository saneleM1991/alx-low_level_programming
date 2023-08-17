#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Get number of elements in a list
 * @h: Pointer the head node
 * Return: The lenght of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}

	return (count);
}
