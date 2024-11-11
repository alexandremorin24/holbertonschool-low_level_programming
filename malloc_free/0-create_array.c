#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char
 *
 * @size: the number of chars in the array
 * @c: char to initialize
 *
 * Description: This program creates an array of a given size and 
 * initializes it with a specific character.
 *
 * Return: a pointer to the array, or NULL if it fails or if the size is zero
 */

char *create_array(unsigned int size, char c)
{
    char *tableau = malloc(size * sizeof(char));
    unsigned int i = 0;

    if (tableau == NULL || size == 0)
    {
        return (NULL);
    }

    for (; i < size; i++)
    {
        tableau[i] = c;
    }

    return (tableau);
}