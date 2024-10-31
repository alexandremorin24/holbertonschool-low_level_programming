#include <stdio.h>
#include <string.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to convert
 *
 * Return: converted string
 */

char *string_toupper(char *str)
{
	int count = 0;

	for (; str[count] != '\0' ; count++)
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			str[count] = str[count] - 32;
		}
	}
	return (str);
}
