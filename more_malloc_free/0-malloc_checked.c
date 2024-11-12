#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc and checks for failure
 * @b: the number of bytes to allocate
 *
 * Description: This function attempts to allocate memory of size `b` bytes.
 * If malloc fails and returns NULL, the function causes the program to
 * exit with a status value of 98. On success, it returns a pointer to
 * the allocated memory.
 *
 * Return: A pointer to the allocated memory on success. Exits with status 98
 * if malloc fails.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
