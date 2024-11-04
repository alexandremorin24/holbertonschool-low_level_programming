#include <stdio.h>
#include <string.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The initial segment of the string to be scanned
 * @accept: The string containing the characters to match in s
 *
 * Description: This function calculates the length of the initial segment
 * of the string `s` which consists entirely of characters from `accept`.
 *
 * Return: The number of characters in the initial segment of `s` which
 * are part of `accept`.
 */


unsigned int _strspn(char *s, char *accept)
{
	int countS = 0, countAccept = 0, segmentLength = 0;

	for (; s[countS] != '\0'; countS++)
	{
		for (countAccept = 0; accept[countAccept] != '\0'; countAccept++)
		{
			if (s[countS] == accept[countAccept])
			{
				segmentLength++;
				break;
			}
		}

	if (accept[countAccept] == '\0')
		{
			break;
		}
	}

	return (segmentLength);
}
