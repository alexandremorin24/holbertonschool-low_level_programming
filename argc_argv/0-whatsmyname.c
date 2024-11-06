#include <stdio.h>

/**
 * main - prints the name of the program, followed by a new line
 * @argc: argument count, number of command line arguments (unused)
 * @argv: argument vector, array of strings representing command line arguments
 *
 * Description: This program prints its own name, which is the first argument
 * in the `argv` array, followed by a new line. If the program is renamed,
 * it will print the new name without needing to recompile.
 *
 * Return: 0 on success
 */


int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
