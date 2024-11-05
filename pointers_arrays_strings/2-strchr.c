#include <stdio.h>
#include <string.h>

/**
 * _strchr - locate a character in a string
 * @s: string to check
 * @c: char to search
 *
 * Description: This function search the character c from the string s
 *
 * Return:	pointer to the first occurence of the character c
 *		or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int count = 0;

	for (; s[count] != '\0'; count++)
	{
		if (s[count] == c)
		{
			return (&s[count]);
		}
	}

	if (c == '\0')
	{
		return (&s[count]);
	}

	return (NULL);
}
