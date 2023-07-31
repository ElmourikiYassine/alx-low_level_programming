#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: the array
 * @size: the size
 * Return: Always 0.
 **/

void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int sumrev = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		sumrev += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sum, sumrev);
}

