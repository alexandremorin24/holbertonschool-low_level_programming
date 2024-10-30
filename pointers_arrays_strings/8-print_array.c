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

	for (count = 0; count < n; count++)
	{
		if (count < (n - 1))
		{
			printf("%i, ", *(a + count));
		}
		else
		{
			printf("%i", *(a + count));
		}
	}
	printf("\n");
}
