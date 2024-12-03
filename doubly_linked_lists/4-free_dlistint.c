#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to the head of the list
 *
 * Description: Frees all the nodes of a doubly linked list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *locator;

	while (head != NULL)
	{
		locator = head;
		head = head->next;
		free(locator);
	}
}
