#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add node to the begining of the list
 * @head: pointer to head node
 * @n: data to be set
 * Return: pointer to new node or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp_node = (listint_t *)malloc(sizeof(listint_t));

	if (temp_node == NULL)
		return (NULL);

	temp_node->n = n;
	temp_node->next = *head;
	*head = temp_node;

	return (temp_node);
}
