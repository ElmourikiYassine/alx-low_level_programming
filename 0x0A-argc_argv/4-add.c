#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		result = (result * 10 + (*s - '0'));
		s++;
	}

	return (sign * result);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, n;

	if (argc == 1)
		n = 0;
	for (i = 1; i < argc; i++)
	{
		if (_atoi(argv[i]) == 0 && argv[i][0] != '0')
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
		{
			n += _atoi(argv[i]);
		}
	}
	printf("%d\n", n);

	return (0);
}

