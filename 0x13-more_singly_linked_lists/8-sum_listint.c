#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - sum data in the list
 * @head: head node pointer
 * Return: sum of data | 0 if list empty
 */
int sum_listint(listint_t *head)
{
	int result = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		result = result + head->n;
		head = head->next;
	}

	return (result);
}
