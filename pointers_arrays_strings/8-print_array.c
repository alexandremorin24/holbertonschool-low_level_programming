#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: Array to print
 * @n: Number of elements to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int count;

	for (count = 0; *(a + count) != *(a + n); count++)
	{
		_putchar(*a + count);
	}
	_putchar('\n');
}
