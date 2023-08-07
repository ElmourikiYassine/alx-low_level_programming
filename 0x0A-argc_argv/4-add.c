#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, j, n;

	if (argc == 1)
		n = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (0);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		n += atoi(argv[i]);
	}
	printf("%d\n", n);
	return (0);
}

