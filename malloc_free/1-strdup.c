#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a given string into newly allocated memory
 * @str: the original string to duplicate
 *
 * Description: This function returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * If str is NULL or if memory allocation fails, the function returns NULL.
 * The duplicated string memory can be freed by the caller.
 *
 * Return: a pointer to the duplicated string, or NULL if str is NULL
 * or if memory allocation fails
 */

char *_strdup(char *str)
{
	unsigned int i = 0, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (; str[i] != '\0'; i++)
	{
	}

	char *strcopy = malloc(i * sizeof(char) + 1);

	if (strcopy == NULL)
	{
		return (NULL);
	}

	for (; j <= i; j++)
	{
		strcopy[j] = str[j];
	}

	return (strcopy);
}
