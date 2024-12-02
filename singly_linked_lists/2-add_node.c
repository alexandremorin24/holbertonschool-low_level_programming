#include "lists.h"

/**
 * add_node - Adds a new node at the start of a list_t list
 * @head: Double pointer to the list's head
 * @str: String to duplicate into the new node
 *
 * Return: Address of the new node, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	char *copy = strdup(str);
	list_t *newNode = malloc(sizeof(list_t));
	unsigned int len = 0;

	if (copy == NULL || newNode == NULL)
	{
		free(copy);
		free(newNode);
		return (NULL);
	}

	while (copy[len])
		len++;

	newNode->str = copy;
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
