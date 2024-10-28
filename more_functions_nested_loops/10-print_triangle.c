#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 *
 * @size: size of triangle
 *
 * Return: Void
 */

void print_triangle(int size)
{
	int line, space, diese;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (line = 0; line < size; line++)
	{
		for (space = size - line - 1; space > 0; space--)
		{
			_putchar (' ');
		}
		for (diese = 0; diese <= line; diese++)
		{
			_putchar ('#');
		}
		 _putchar ('\n');
	}
}

