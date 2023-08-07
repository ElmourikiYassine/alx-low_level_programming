#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Concatenates all arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *new_string;
	char **c;

	size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			c = av;
			if (c[i][j] != '\0')
				size++;
		}
		size++;
	}

	new_string = (char *)malloc((size + 1) * sizeof(char));

	if (new_string == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			new_string[k] = av[i][j];

		new_string[k] = '\n';
		k++;
	}
	new_string[size] = '\0';
	return (new_string);
}

