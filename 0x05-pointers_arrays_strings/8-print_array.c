#include "main.h"
/**
 * print_number  - print form 0 to 14 using only putchar
 * @n: number to be printed
 * Return: none
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10)
		print_number(n / 10);
	_putchar('0' + (n % 10));
}
/**
 * custom_strlen - the lenght
 * @str: the string
 *
 * Return: lenght
 */

int custom_strlen(const char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}
/**
 * print_array - print every other char
 * @a: the string
 * @n: the string
 *
 * Return: noting
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		print_number(a[i]);
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

