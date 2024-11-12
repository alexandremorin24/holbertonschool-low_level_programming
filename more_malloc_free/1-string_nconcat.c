#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes of the second string
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes to include from s2
 *
 * Description: This function creates a new string in dynamically allocated
 * memory that contains s1 followed by the first n bytes of s2, null-terminated
 * If s1 or s2 is NULL, it is treated as an empty string. If n is greater than
 * or equal to the length of s2, the entire s2 string is used.
 * The function returns a pointer to the newly created string or NULL if
 * memory allocation fails.
 *
 * Return: Pointer to the newly concatenated string, or NULL if malloc fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, count;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n < j)
		j = n;

	ptr = malloc((i + j + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (count = 0; count < i; count++)
		ptr[count] = s1[count];

	for (; count < i + j; count++)
		ptr[count] = s2[count - i];

	ptr[count] = '\0';

	return (ptr);
}
