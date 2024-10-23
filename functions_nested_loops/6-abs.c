#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The number to check
 *
 * Return: The absolute value of an integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		return(-n);
	}
	else
	{
		return(n);
	}
}
