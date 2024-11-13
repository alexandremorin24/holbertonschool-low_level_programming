#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program into a single string
 * @ac: The number of arguments
 * @av: The array of arguments as strings
 *
 * Description: This function concatenates all arguments of the program into
 * a single string. Each argument is followed by a newline character `\n`.
 * If `ac` is 0 or `av` is NULL, the function returns NULL.
 * If memory allocation fails, the function also returns NULL.
 *
 * Return: A pointer to the newly allocated string, or NULL if allocation fails
 * or if `ac` == 0 or `av` == NULL.
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, count = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
		count++;
	}

	str = malloc(count * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			str[k] = av[i][j];

		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
