#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free linked list
 * @head: head node pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_ptr = *head;

	if (*head == NULL)
		return;

	while (temp_ptr != NULL)
	{
		*head = temp_ptr->next;
		free(temp_ptr);
		temp_ptr = *head;
	}
}
