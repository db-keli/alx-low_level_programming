#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: number of arguments
 * @av: pointer to array of pointers of args
 * Return: Returns pointer to new str; NULL if ac == 0
 * or av == NULL or it fails
 */
char *argstostr(int ac, char **av)
{
	char *new;
	int size_new_str = 0;
	int a, c = 0, b = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		while (av[a][b] != '\0')
		{
			size_new_str++;
			b++;
		}
		b = 0;
	}

	size_new_str += (ac + 1); /* for new line chars */

	new = (char *) malloc(sizeof(char) * size_new_str);
	if (new == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		while (av[a][b] != '\0')
		{
			new[c++] = av[a][b];
			b++;
		}

		b = 0;
		new[c++] = '\n';
	}
	new[c] = '\0';

	return (new);
}
