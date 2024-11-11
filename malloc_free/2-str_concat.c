#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Description: This function takes two strings,
 * allocates a new space in memory, and stores a concatenation of
 * the two strings in the new space.
 * If either of the strings is NULL, it is treated as an empty string.
 * The concatenated result is null-terminated.
 * If memory allocation fails, the function returns NULL.
 *
 * Return: pointer to the concatenated string, or NULL if memory alloc fails
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, k = 0;
	char *sortie;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (; s1[i] != '\0'; i++)
	{
	}

	for (; s2[j] != '\0'; j++)
	{
	}

	sortie = malloc((i + j + 1) * sizeof(char));

	if (sortie == NULL)
	{
		return (NULL);
	}

	for (; k < i; k++)
	{
		sortie[k] = s1[k];
	}

	for (; k < i + j; k++)
	{
		sortie[k] = s2[k - i];
	}

	sortie[i + j] = '\0';

	return (sortie);
}
