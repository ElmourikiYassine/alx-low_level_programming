#include "main.h"
#include <stdio.h>

/**
 *   _puts - prints the string
 * @str: the string
 *
 * Return: noting
 */


void _puts(char *str)
{
	int i = 0;
	int j;
	char c = *str;

	while (c != '\0')
	{
		i++;
		c = *(str + i);
	}
	for (j = 0; j < i; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}

