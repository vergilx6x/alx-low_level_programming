#include "lists.h"

/**
 * dlistint_len - The number of elements in
 * the double linked list
 *
 * @h: Pointer to the head of the list
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
