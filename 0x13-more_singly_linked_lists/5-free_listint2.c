#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free linked list
 * @head: head node pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_ptr1 = *head;
	listint_t *temp_ptr2 = *head;

	if (*head == NULL)
		return;

	while (temp_ptr1 != NULL)
	{
		temp_ptr2 = temp_ptr1->next;
		free(temp_ptr1);
		temp_ptr1 = temp_ptr2;
	}
	*head = temp_ptr1;
}
