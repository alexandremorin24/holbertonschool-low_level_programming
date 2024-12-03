#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the list
 * @idx: Index where the new node should be added, starting at 0
 * @n: Value to store in the new node
 *
 * Return: Address of the new node, or NULL if it failed or idx is invalid
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t count = 0;
	dlistint_t *locator = *h;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (locator != NULL)
	{
		if (count == idx - 1)
		{
			newNode->next = locator->next;
			newNode->prev = locator;

			if (locator->next != NULL)
				locator->next->prev = newNode;

			locator->next = newNode;

			return (newNode);
		}

		locator = locator->next;
		count++;
	}

	if (count == idx)
		return (add_dnodeint_end(h, n));

	free(newNode);
		return (NULL);
}
