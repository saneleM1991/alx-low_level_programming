#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert node at index position
 * @head: head node pointer
 * @idx: position to insert node
 * @n: node data
 * Return: newly added node | null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *temp1 = *head;
	unsigned int i;
	size_t listlen = listint_len(*head);

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx > listlen)
		return (NULL);

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}

	for (i = 0; i < idx - 1; i++)
		temp1 = temp1->next;

	node->next = temp1->next;
	temp1->next = node;

	return (node);
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
