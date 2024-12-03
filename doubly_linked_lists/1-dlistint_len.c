#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a dlistint_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodeNumber = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		nodeNumber += 1;
		h = h->next;
	}
	return (nodeNumber);
}
