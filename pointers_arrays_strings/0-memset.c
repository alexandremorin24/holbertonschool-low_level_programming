#include <stdio.h>
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the constant byte to fill the memory with
 * @n: the number of bytes to fill
 *
 * Description: This function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b. It returns a pointer
 * to the memory area s.
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}

	return ("&s");
}
