#include "main.h"

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

	if (copy == NULL || newNode == NULL)
	{
		free(copy);
		return (NULL);
	}
	newNode->str = copy;
	newNode->len = strlen(copy);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
