#include <stdio.h>
#include <string.h>

/**
 * cap_string - capitalize all words of a string
 * @str: string to capitalize
 *
 * Return: converted string
 */

char *cap_string(char *str)
{
	int count = 0;

	if ((str[count] >= 'a') && (str[count] <= 'z'))
	{
		str[count] = str[count] - 32;
	}

	for (; str[count] != '\0' ; count++)
	{
		if (str[count] == '\n' || str[count] == '\t' ||
			str[count] == ' ' || str[count] == ',' ||
			str[count] == ';' || str[count] == '.' ||
			str[count] == '!' || str[count] == '?' ||
			str[count] == '"' || str[count] == '(' ||
			str[count] == ')' || str[count] == '{' ||
			str[count] == '}')
		{
			if ((str[count + 1] >= 'a') && (str[count + 1] <= 'z'))
			{
				str[count + 1] = str[count + 1] - 32;
			}
		}
	}
	return (str);
}
