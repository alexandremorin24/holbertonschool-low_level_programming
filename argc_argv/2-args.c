#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: Number of command-line arguments
 * @argv: Array containing the command-line arguments
 *
 * Description: This program iterates through all arguments passed to it,
 * including the program's name, and prints each argument on a new line.
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int count = 0;

	for (; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
