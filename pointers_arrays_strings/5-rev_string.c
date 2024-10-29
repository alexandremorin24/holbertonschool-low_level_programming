#include "main.h"

/**
 *  rev_string - reverses a string
 *
 * @s: the string to print
 *
 * Return: void
 */
void rev_string(char *s)
{
	int count, size, incr;
	char temp;

	for (count = 0; s[count] != '\0'; count++)
	{
	}

	size = count - 1;

	for (incr = 0; incr <= size; incr++, size--)
	{
		temp = s[incr];
		s[incr] = s[size];
		s[size] = temp;
	}
}
