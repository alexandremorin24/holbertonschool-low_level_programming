#include "main.h"

/**
 * print_square - prints a square of n blocs
 *
 * @n: number of blocs
 *
 * Return: Void
 */

void print_square(int size)
{
	int i = 0, j = 0;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar ('#');
			}

			_putchar ('\n');

		}
	}
	if (size <= 0)
	{
		_putchar ('\n');

	}
}
