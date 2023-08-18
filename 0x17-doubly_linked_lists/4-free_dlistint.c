#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees list.
 * @head: The head node.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
