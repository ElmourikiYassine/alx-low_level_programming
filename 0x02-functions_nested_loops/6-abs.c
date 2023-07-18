#include "main.h"
/**
 * _abs - multiply the negative integers by -1 and return the rest
 * @n: tested number
 *
 * Return: the absolute value of @n
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1 * n);
	}
		return (0);
}
