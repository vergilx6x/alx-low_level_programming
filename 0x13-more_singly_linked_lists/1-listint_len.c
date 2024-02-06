#include "lists.h"

/**
 * listint_len - returns the number of nodes in a linked list
 * @h: pointer to a linked list of type lisint_t
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
