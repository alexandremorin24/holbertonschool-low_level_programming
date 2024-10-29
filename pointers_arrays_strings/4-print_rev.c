#include "main.h"

/**
 *  print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: the string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	for (; s[i] >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
