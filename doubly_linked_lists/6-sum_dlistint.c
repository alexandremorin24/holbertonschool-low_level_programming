#include "lists.h"

/**
 * sum_dlistint - Sums all the data (n) of a dlistint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all data (n), or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int dataSum = 0;

	while (head != NULL)
	{
		dataSum += head->n;
		head = head->next;
	}
	return (dataSum);
}