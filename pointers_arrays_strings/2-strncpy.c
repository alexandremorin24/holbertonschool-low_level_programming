#include <stdio.h>
#include <string.h>

/**
 *  _strncpy - copy a string
 * @dest: destination of copy
 * @src: source string
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
