#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - remove head node and return data
 * @head: head node pointer
 * Return: node data | 0 if list is emtpy
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_ptr;
	int data;

	if (*head == NULL)
		return (0);

	temp_ptr = (*head)->next;
	data = (*head)->n;

	free(*head);
	*head = temp_ptr;
	return (data);
}
