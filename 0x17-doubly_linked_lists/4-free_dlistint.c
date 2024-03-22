#include "lists.h"

/**
 * free_dlistint - Free a dlistint_t list
 *
 * @head: Pointer to the head of the list
 * Return: No return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
