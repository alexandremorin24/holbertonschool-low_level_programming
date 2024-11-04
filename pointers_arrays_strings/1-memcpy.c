#include <stdio.h>
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area to copy from
 * @n: number of bytes to copy
 *
 * Description: This function copies n bytes from the memory area
 * pointed to by src to the memory area pointed to by dest.
 * It returns a pointer to dest.
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}

	return (dest);
}
