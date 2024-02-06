#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data stored in a linked list
 * @head: first node of the linked list
 *
 * Return: sum off all data of the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
