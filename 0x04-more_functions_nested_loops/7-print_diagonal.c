#include "main.h"
/**
 * print_diagonal - print diagonals
 * @n: number of diagonals
 * Return: none
 */

void print_diagonal(int n)
{
	int i, j;

	if (n == 0)
	{
		_putchar('\n');
		return;
	}
	if (n > 1)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		return;
	}
	_putchar('\n');
}

