#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 * @x: the current divisor being tested as a potential square root
 *
 * Description: This function uses recursion to calculate the natural square
 * root of the integer n. If n does not have a natural square root
 * (i.e., an integer result), the function returns -1 to indicate this.
 *
 * Return: the natural square root of n, or -1 if n does not have one
 */

int recursive_function(int n, int x);

int _sqrt_recursion(int n)
{
	int x = 1;

	if (n < 1)
		return (-1);

	return (recursive_function(n, x));
}

/**
 * recursive_function - find the natural square root of a number
 * @n: the number to find the square root of
 * @x: the current divisor being tested as a potential square root
 *
 * Description: This function checks if the square of x equals n, and if so,
 * returns x as the square root. If the square of x exceeds n, it returns -1,
 *
 * Return: the square root of n if it exists, -1 otherwise
 */

int recursive_function(int n, int x)
{
	if (n == x * x)
		return (x);

	if (n < x * x)
		return (-1);

	return (recursive_function(n, x + 1));
}
