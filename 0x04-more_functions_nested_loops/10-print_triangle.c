#include "main.h"

/**
 * print_triangle - check the code
 * @size: the size of the triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j;

	if (size == 0 || size < 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size - i; j++)
				_putchar(' ');
			for (j = 0; j < i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
