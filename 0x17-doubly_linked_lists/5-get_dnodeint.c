#include "lists.h"

/**
 * get_dnodeint_at_index - returns the
 * node of the list at index
 *
 * @head: Pointer to the head of the list
 * @index: index of the wanted node
 * Return: Pointer the wanted node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	i = 0;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}

	return (head);
}
