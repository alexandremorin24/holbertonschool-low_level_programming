#include <stdio.h>
#include <string.h>

/**
 * main -	prints the numbers from 1 to 100
 *		prints Fizz for multiples of 3
 *		prints Buzz for multiples of 5
 *		prints FizzBuzz for multiples of both
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 1;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
