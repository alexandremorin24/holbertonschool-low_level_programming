#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if:
 *         - There is one or more chars in the string b that is not 0 or 1.
 *         - b is NULL.
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int i, result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b == NULL || (b[i] != '0' && b[i] != '1'))
			return (0);

		result = result * 2 + (b[i] - '0');
	}
	return (result);
}