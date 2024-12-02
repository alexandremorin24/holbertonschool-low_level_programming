#include "lists.h"

/**
 * list_len - Returns the number of elements of a list_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t nodeNumber = 0;

	while (h != NULL)
	{
		nodeNumber += 1;
		h = h->next;
	}
	return (nodeNumber);
}
