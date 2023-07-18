#include "main.h"
/**
 * print_to_98 - print to 98
 * @n: the first int
 *
 * Return: noting
 */


void positive(int n);
void negative(int n);
void print_to_98(int n)
{

	if (n >= 0)
	{
		positive(n);
	}
	if (n < 0)
	{
		negative(n);
	}

}
/**
 * positive - print only positive to 98
 * @n: positive integer
 *
 * Return: nothing
 */

void positive(int n)
{
	int i;

	if (n == 0 || (n < 98 && n > 0))
	{
		for (i = n; i <= 98; i++)
		{
			if ((i / 10) != 0)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
	else if (n == 98)
	{
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if ((i / 100) != 0)
				_putchar(i / 100 + '0');
			_putchar(((i % 100) / 10) + '0');
			_putchar(i % 10 + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
/**
 * negative - print only negative to 98
 * @n: negative integer
 *
 * Return: nothing
 */
void negative(int n)
{
	int i;
		for (i = n; i <= 98; i++)
		{
			if (i < 0)
			{
				_putchar('-');
				if (i <= -100)
					_putchar(-1 * (i / 100) + '0');
				if (i <= -10)
					_putchar(-1 * (i % 100) / 10 + '0');
				_putchar(-1 * (i % -10) + '0');
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				print_to_98(i);
				return;
			}
		}
	_putchar('\n');
}








