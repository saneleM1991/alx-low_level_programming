#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all node in the linked list
 * @h: pointer to the head node
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%lu\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
