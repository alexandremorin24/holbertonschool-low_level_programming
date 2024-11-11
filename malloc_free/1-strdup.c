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
	unsigned int i = 0;
	char *strcopy;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of str */
	while (str[i] != '\0')
		i++;

	/* Allocate memory for the duplicate, including the null terminator */
	strcopy = malloc(i + 1);
	if (strcopy == NULL)
		return (NULL);

	/* Copy the string */
	for (i = 0; str[i] != '\0'; i++)
		strcopy[i] = str[i];
	strcopy[i] = '\0';

	return (strcopy);
}
