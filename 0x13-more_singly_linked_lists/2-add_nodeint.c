#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of the linked list
 * @head: pointer to the first node of the list
 * @n: data to insert type of int
 *
 * Return: pointer to the new node or (NULL) if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
