#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: The count of command-line arguments
 * @argv: An array of command-line argument strings (unused in this function)
 *
 * Description: This program outputs the number of command-line arguments
 * passed to it, excluding the program name itself.
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
