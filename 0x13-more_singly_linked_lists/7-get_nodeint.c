#include "lists.h"

/**
 * get_nodeint_at_index - get node at a specific index
 * @head: first node in the linked list
 * @index: index of the node to get
 *
 * Return: pointer to the node with the given index or NUll
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp temp->next;
		i++
	}

	return (temp ? temp : NULL);
}
