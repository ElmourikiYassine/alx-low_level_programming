#include "main.h"
/**
 * print_sign - take @n and check the sign of it
 * @n: tested number
 *
 * Return: 1 if positive, 0 if neutral 0, and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
		_putchar('0');
		return (0);
}
