#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Description: This function allocates memory for an array with `nmemb`
 * elements, each of `size` bytes. The allocated memory is initialized to zero.
 * If `nmemb` or `size` is zero, the function returns NULL.
 * If memory allocation fails, the function also returns NULL.
 *
 * Return: A pointer to the allocated memory, or NULL if allocation fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array = malloc(nmemb * size);
	char *temp = (char *)array;
	unsigned int i;

	if (array == NULL || nmemb == 0 || size == 0)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		temp[i] = 0;

	return (array);

}
