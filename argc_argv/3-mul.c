#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers passed as command-line arguments
 * @argc: Number of command-line arguments
 * @argv: Array containing the command-line arguments
 *
 * Description: This program takes two numbers as arguments, multiplies them,
 * and prints the result followed by a new line. If there are not exactly two
 * arguments provided, it prints "Error" followed by a new line and returns 1.
 *
 * Return: 0 on success, 1 on error due to incorrect number of arguments
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%i\n", result);

	return (0);
}
