#include "lists.h"

/**
 * free_listint2 - frees the linked list
 * @head: pointer to a linked list of type listint_t
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
