#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the base integer
 * @y: the exponent integer
 *
 * Description: This function calculates x raised to the power of y
 * using recursion. If y is lower than 0, the function returns -1
 * to indicate an error.
 *
 * Return: the result of x raised to the power of y, or -1 if y < 0
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
