#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a specific index in a
 *                            dlistint_t linked list
 * @head: Double pointer to the head of the list
 * @index: Index of the node to delete, starting at 0
 *
 * Return: 1 if successful, -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *locator = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = locator->next;

		if (locator->next != NULL)
			locator->next->prev = NULL;

		free(locator);
		return (1);
	}

	while (locator != NULL)
	{
		if (count == index)
		{
			if (locator->prev != NULL)
				locator->prev->next = locator->next;

			if (locator->next != NULL)
				locator->next->prev = locator->prev;

			free(locator);
			return (1);
		}
		locator = locator->next;
		count++;
	}
	return (-1);
}
