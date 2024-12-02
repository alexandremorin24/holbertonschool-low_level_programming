#include "lists.h"

/**
 * add_node_end - Adds a new node at the tail of a list_t list
 * @head: Double pointer to the list's head
 * @str: String to duplicate into the new node
 *
 * Return: Address of the new node, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *copy;
	list_t *newNode = malloc(sizeof(list_t));
	list_t *locator = *head;
	unsigned int len = 0;

	if (newNode == NULL)
		return (NULL);

	copy = strdup(str);

	if (copy == NULL)
	{
		free(newNode);
		return (NULL);
	}

	while (copy[len])
		len++;

	newNode->str = copy;
	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (locator->next != NULL)
		locator = locator->next;

	locator->next = newNode;
	return (newNode);
}
