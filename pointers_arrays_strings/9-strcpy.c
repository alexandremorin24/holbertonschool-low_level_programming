#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 *
 * @src: string to copy
 * @dest: destination of copy
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int srcsize;

	for (srcsize = 0; *(src + srcsize) != '\0'; srcsize++)
	{
		*(dest + srcsize) = *(src + srcsize);
	}
	return (dest);
}
