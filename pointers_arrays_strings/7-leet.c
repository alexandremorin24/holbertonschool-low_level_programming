#include <stdio.h>
#include <string.h>

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: encoded string
 */

char *leet(char *str)
{
	char tabLetter[] = "aAeEoOtTlL";
	char tabL33t[] = "4433007711";
	int countStr = 0, countTab;

	for (; str[countStr] != '\0'; countStr++)
	{
		for (countTab = 0; countTab < 10; countTab++)
		{
			if (str[countStr] == tabLetter[countTab])
			{
				str[countStr] = tabL33t[countTab];
			}
		}
	}
	return (str);
}
