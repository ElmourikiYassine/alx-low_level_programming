#include "main.h"
#include <unistd.h>
#include<stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _putchar(char c);
int main(void)
{
	int i, tmp;

	for (i = 0; i < 1024; i++)
	{
		if (!(i % 3))
		{
			tmp = tmp + i;
		}
		if (!(i % 5))
		{
			tmp = tmp + i;
		}
	}
	_putchar((tmp / 100000) + '0');
	_putchar(( tmp % 100000 / 10000) + '0');
	_putchar(( tmp % 10000 / 1000) + '0');
	_putchar(( tmp % 1000 / 100) + '0');
	_putchar(( tmp % 100 / 10) + '0');
	_putchar((tmp % 10) + '0');
	_putchar('\n');
    return (0);
}
int _putchar(char c)
{
        return (write(1, &c, 1));
}
