#include <stdio.h>
#include <string.h>

/**
 * reverse_array - reverse the content of an array of integers
 * @a: string to reverse
 * @n: number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int count = 0, temp;

	for (; count < (n / 2) ; count++)
	{
		temp = a[count];
		a[count] = a[n - 1 - count];
		a[n - 1 - count] = temp;
	}
}
