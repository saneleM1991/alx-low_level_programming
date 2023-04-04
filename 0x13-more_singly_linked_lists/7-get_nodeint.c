#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - get node at index
 * @head: head node pointer
 * @index: index of the node
 * Return: pointer to node | null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t lstlen, i;

	lstlen = listint_len(head);

	if (index > lstlen)
		return (NULL);

	for (i = 0; i < index; i++)
		head = head->next;

	return (head);
}
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
