#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be scanned
 * @accept: the string containing the characters to match
 *
 * Description: This function locates the first occurrence in the string `s`
 * of any of the bytes in the string `accept`. It returns a pointer to the byte
 * in `s` that matches one of the bytes in `accept`
 * or NULL if no such byte is found.
 *
 * Return: pointer to the byte in `s` that matches one of the bytes in `accept`
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int countS = 0, countAccept = 0;

	for (; s[countS] != '\0'; countS++)
	{
		for (countAccept = 0; accept[countAccept] != '\0'; countAccept++)
		{
			if (s[countS] == accept[countAccept])
			{
				return (&s[countS]);
			}
		}
	}
	return (NULL);
}
