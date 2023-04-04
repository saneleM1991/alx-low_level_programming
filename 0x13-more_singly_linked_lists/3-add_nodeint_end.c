#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add node to the end of the list
 * @head: pointer to head node
 * @n: data to set
 * Return: poinetr to new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr_head = *head;
	size_t list_size;
	size_t i;
	listint_t *temp_node = (listint_t *)malloc(sizeof(listint_t));

	if (temp_node == NULL)
		return (NULL);

	temp_node->n = n;
	temp_node->next = NULL;

	if (ptr_head == NULL)
	{
		*head = temp_node;
		return (temp_node);
	}

	list_size = listint_len(ptr_head);
	for (i = 0; i < list_size - 1; i++)
	{
		ptr_head = ptr_head->next;
	}
	ptr_head->next = temp_node;
	return (temp_node);
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
