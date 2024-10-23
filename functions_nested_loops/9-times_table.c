#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Void
 */
void times_table(void)
{
	int firstNumber, secondNumber, result;

	for (firstNumber = 0; firstNumber <= 9; firstNumber++)
	{
	for (secondNumber = 0; secondNumber <= 9; secondNumber++)
	{
		result = firstNumber * secondNumber;
		if (result < 10)
		{
			if (secondNumber != 0)
			{
				_putchar(' ');
			}
			_putchar(result + '0');
		}
		else
		{
			_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}

		if (secondNumber != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	}
}
