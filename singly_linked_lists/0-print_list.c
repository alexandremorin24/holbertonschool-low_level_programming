#include "main.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t nodeNumber = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodeNumber += 1;
		h = h->next;
	}

	return (nodeNumber);
}
