#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc: argument count
 * @argv: list of arguments
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int num1, num2;
	char *operator = argv[2];
	int (*operation)(int, int) = get_op_func(operator);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operation(num1, num2));
	return (0);
}

