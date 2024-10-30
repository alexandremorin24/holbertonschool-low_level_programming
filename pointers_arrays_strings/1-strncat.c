#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string to which src will be appended
 * @src: source string to append
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int endOfDest = 0, i = 0;

	for (endOfDest = 0; dest[endOfDest] != '\0'; endOfDest++)
	{
	}

	for (i = 0; src[i] != src[n]; i++, endOfDest++)
	{
		dest[endOfDest] = src[i];
	}

	return (dest);
}
