#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints the lenght of the list
 * @h: head node pointer
 * Return: number of node | 0 if its emtpy
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
