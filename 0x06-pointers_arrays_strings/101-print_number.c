#include "main.h"
/**
 * print_number - print the numbers
 * @n: the integers
 *
 *  Return: nothing
 */

void print_number(int n)
{
	int i, j;
	unsigned int mod = 10;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while ((unsigned int) n % mod != (unsigned int) n)
	{
		i++;
		mod *= 10;
	}

	for (j = 0; j <= i; j++)
	{
		mod /= 10;
		if (mod != 0)
			_putchar((n / mod) % 10 + '0');
	}
}

