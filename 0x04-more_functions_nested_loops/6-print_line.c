#include "main.h"
/**
 * print_line - print _
 * @n: number of _
 * Return: none
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n == 0)
			_putchar('\n');
		if (n > 0)
			_putchar('_');
	}
	_putchar('\n');
}

