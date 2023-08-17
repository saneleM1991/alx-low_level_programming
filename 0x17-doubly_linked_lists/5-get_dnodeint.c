#include "lists.h"

/**
 * get_dnodeint_at_index - Get node in by index.
 * @head: The head node of list.
 * @index: The node to locate.
 * Return: NULL if not exist | the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
