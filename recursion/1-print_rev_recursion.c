#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse followed by a new line
 * @s: the string to be printed
 *
 * Description: This function uses recursion to print each character
 * of the string one by one until it reaches the null byte ('\0'), at
 * which point it stops and prints a newline.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);

	_putchar(*s);
}
