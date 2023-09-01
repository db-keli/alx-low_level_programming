#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: number of characters to contain
 * @c: character to fill up array
 * Return: pointer to array created; NULL if failed or size = 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int m;

	char *arr = malloc(size * sizeof(char));

	if (size == 0 || arr == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
		arr[m] = c;

	return (arr);
}
