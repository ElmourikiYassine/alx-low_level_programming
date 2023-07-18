#include "main.h"
/**
 * times_table - print a freaking table
 *
 * Return: noting
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (((i % 10) * j) / 10 == 0 && j != 0)
				_putchar(' ');
			else if (((i % 10) * j) / 10 != 0)
			{
				_putchar(((i % 10) * j) / 10 + '0');
			}
			_putchar(((i % 10) * j) % 10 + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
