#include <stdio.h>
#include <string.h>

/**
 *  _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: pointer to the resulting string dest
 */
int _strcmp(char *s1, char *s2)
{
	int length = 0;

	for (length = 0; s1[length] != '\0' && s2[length] != '\0'; length++)
	{
		if (s1[length] != s2[length])
		{
			return (s1[length] - s2[length]);
		}
	}

	if ((s1[length] == '\0' && s2[length] != '\0') ||
			(s1[length] != '\0' && s2[length] == '\0'))
	{
		return (s1[length] - s2[length]);
	}
	return (0);
}
