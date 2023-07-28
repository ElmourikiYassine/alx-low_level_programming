#include <stdio.h>

/**
 * print_buffer - print the buffer
 * @b: the buffer
 * @size: the buffer size
 * Return: 0
 */

void print_buffer(char *b, int size)
{
	int i, j, length;

	i = 0;
	length = size;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (i < length)
	{
		if ((i % 10) == 0)
		{
			printf("%08x: ", i);
		for (j = i; j < 10 + i ; j += 2)
		{
			if (j < length)
			{
				printf("%02x", *(b + j));
				printf("%02x", *(b + j + 1));
				printf(" ");
			}
			else
				printf("     ");
		}
		for (j = i; j < 10 + i && j < length; j++)
		{
			if (*(b + j) <= 31 && *(b + j) >= 0)
				printf(".");
			else
				printf("%c", *(b + j));
		}
		printf("\n");
		}
		i++;
	}
}
