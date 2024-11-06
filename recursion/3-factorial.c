#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: the number to find the factorial of
 *
 * Return: the factorial of n, or -1 if n < 0 (to handle negative inputs)
 */

int factorial(int n)
{

	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
