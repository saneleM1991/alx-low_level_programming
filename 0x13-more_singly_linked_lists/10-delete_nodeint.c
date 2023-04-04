#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node at specific position
 * @index: index of a node to delete
 * Return: 1 succusess | -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1 = *head;
	listint_t *temp2;
	unsigned int i;
	size_t listlen = listint_len(*head);

	if (index > listlen)
	       return (-1);

	if (index == 0)
	{
		*head = temp1->next;
		free(temp1);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
		temp1 = temp1->next;

	temp2 = temp1->next;
	temp1->next = temp2->next;
	free(temp2);

	return (1);

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
