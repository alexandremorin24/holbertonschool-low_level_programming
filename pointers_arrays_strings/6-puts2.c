#include "main.h"

/**
 *  puts2 - prints every other character of a string
 *
 * @str: the string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int count, size, j;

	for (count = 0; *(str + count) != '\0'; count++)
	{
	}

	size = count - 1;

	for (j = 0; j < size; j += 2)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
