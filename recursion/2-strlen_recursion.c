#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to mesure
 *
 * Description: This function uses recursion to count each character
 * of the string one by one until it reaches the null byte ('\0'), at
 * which point it stops and returns the string length.
 *
 * Return: legnth of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
