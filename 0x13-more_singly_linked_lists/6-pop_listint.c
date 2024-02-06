#include "lists.h"

/**
 * pop_listint - deletes the first node of the linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: the data that was stored in the deleted node 
 * or 0 if the list is empty
 */

int pop_listint(lisint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
