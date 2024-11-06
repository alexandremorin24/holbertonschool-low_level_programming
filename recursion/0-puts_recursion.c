#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: the string to be printed
 *
 * Description: This function uses recursion to print each character
 * of the string one by one until it reaches the null byte ('\0'), at
 * which point it stops and prints a newline.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}


	_putchar(*s);
	_puts_recursion(s + 1);
}
