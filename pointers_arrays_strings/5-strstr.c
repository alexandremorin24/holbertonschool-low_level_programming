#include <stdio.h>
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: the main string to be scanned
 * @needle: the substring to be searched in haystack
 *
 * Description: This function finds the first occurrence of the substring
 * `needle` in the string `haystack`. The terminating null bytes are not
 * compared.
 *
 * Return: pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */


char *_strstr(char *haystack, char *needle)
{
	int countH = 0, countN = 0;

	for (; haystack[countH] != '\0'; countH++)
	{
		for (countN = 0; needle[countN] != '\0'; countN++)
		{
			if (haystack[countH + countN] != needle[countN])
			{
				break;
			}
		}
		if (needle[countN] == '\0')
		{
			return (&haystack[countH]);
		}
	}
	return (NULL);
}
