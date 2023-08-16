#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Print opcodes of main function
 * @num_bytes: Number of bytes to print
 */
void print_opcodes(int num_bytes);

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Exit status
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(num_bytes);

	return (0);
}

/**
 * print_opcodes - Print opcodes of main function
 * @num_bytes: Number of bytes to print
 */
void print_opcodes(int num_bytes)
{
	unsigned char *main_addr = (unsigned char *)main;
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_addr[i]);
		if (i < num_bytes - 1)
			printf(" ");
	}

	printf("\n");
}

