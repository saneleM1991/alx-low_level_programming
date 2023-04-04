#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free linked list
 * @head: head node pointer
 */
void free_listint(listint_t *head)
{
	listint_t *temp_ptr = head;

	while (head != NULL)
	{
		temp_ptr = head->next;
		free(head);
		head = temp_ptr;
	}
}
