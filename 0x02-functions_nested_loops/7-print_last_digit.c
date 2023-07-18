#include "main.h"
/**
 * print_last_digit - getting the last digit using mod by 10
 * @n: tested number
 *
 * Return: the last digit of any interger
 */

int print_last_digit(int n)
{
	int tmp = 0;

	if (n > 0)
	{
		tmp = n % 10;
		_putchar(tmp + '0');
	}
	else if (n < 0)
	{
		tmp = (-1 * (n % -10));
		_putchar(tmp + '0');
	}
	else
	{
		tmp = 0;
		_putchar(tmp + '0');
	}
	return (tmp);
}
