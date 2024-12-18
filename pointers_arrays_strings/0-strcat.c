#include <stdio.h>
#include <string.h>

/**
 * _strcat - appends the src string to the dest string, overwriting the
 * terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte
 *
 * @src: string to append
 * @dest: destination of append
 *
 * Return: pointer to *dest
 */
char *_strcat(char *dest, char *src)
{
	int endOfDest = 0, i = 0;

	for (endOfDest = 0; dest[endOfDest] != '\0'; endOfDest++)
	{
	}

	for (i = 0; src[i] != '\0'; i++, endOfDest++)
	{
		dest[endOfDest] = src[i];
	}

	dest[endOfDest] = '\0';

	return (dest);
}
