#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix (number of rows/columns)
 *
 * Description: This function calculates the sum of the main diagonal and
 * the secondary diagonal of a square matrix and prints the results.
 */

void print_diagsums(int *a, int size)
{
	int i = 0, result = 0, resultr = 0;

	for (i = 0; i < size; i++)
	{
		result += a[i * (size + 1)];
		resultr += a[i * size + (size - 1 - i)];
	}
	printf("%i, %i\n", result, resultr);
}
