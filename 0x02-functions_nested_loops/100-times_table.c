#include "main.h"
/**
 * print_times_table - print the table
 * @n: the first int
 *
 * Return: noting
 */

void non_zero(int n);
void print_times_table(int n)
{
	if (n > 0 && n < 15)
	{
		non_zero(n);
	}
	if (n == 0)
	{
		_putchar(0 + '0');
		_putchar('\n');
	}
}
/**
 * non_zero - print the table
 * @n: the first int
 *
 * Return: noting
 */


void non_zero(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if ((i * j) >= 100)
			{
				_putchar(' ');
			}
			else if ((i * j) < 100 && (i * j) >= 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if ((i * j) < 10 && j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			if (i * j >= 100)
			{
				_putchar((i * j / 100) + '0');
			}
			if ((i * j) >= 10)
			{
				_putchar(((i * j) % 100) / 10 + '0');
			}
			_putchar((i * j) % 10 + '0');
			if (j != n)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
