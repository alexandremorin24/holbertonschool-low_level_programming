#include "main.h"

/**
 * puts_half - prints the second half of a string
 *
 * @str: the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length, middle, n;

	for (length = 0; str[length] != '\0'; length++)
	{
	}

	middle = ((length - 1) / 2);

	for (n = middle; n <= length; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');

}
