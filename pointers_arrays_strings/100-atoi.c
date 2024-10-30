#include "main.h"
#include <stdio.h>

/**
 *  _atoi- convert a string to an integer
 *
 * @s: string to convert
 *
 * Return: 0 if there is no number
 */

int _atoi(char *s)
{
	int count = 0, sign = 1, result = 0;

	for (count = 0; *(s + count) != '\0'; count++)
	{
		if (*(s + count) == '-')
		{
			sign = -sign;
		}
		else if (*(s + count) >= '0' && *(s + count) <= '9')
		{
			break;
		}
	}

	if (*(s + count) < '0' || *(s + count) > '9')
	{
		return (0);
	}

	for (; *(s + count) != '\0'; count++)
	{
		if (*(s + count) >= '0' && *(s + count) <= '9')
		{
			result = result * 10 + (*(s + count) - '0');
		}
		else
		{
			break;
		}
	}

	return (result * sign);
}
