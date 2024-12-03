#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodeNumber = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%i\n", h->n);
		nodeNumber += 1;
		h = h->next;
	}
	return (nodeNumber);
}
