#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * @argc: number of argument supplied to the programme.
 * @argv: argument supplied to the programme.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

