#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 *@n: starting number
 *
 * Return: result
 */
void print_to_98(int n)
{
	int number;

	if (n < 98)
	{
		for (number = n; number <= 98; number++)
		{
			printf("%d", number);

			if (number != 98)
			{
				printf(", ");
			}	
		}
	}
	else
	{
		for (number = n; number >= 98; number--)
		{
			printf("%d", number);

			if (number != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
