#include "main.h"
#include <stdio.h>

/**
 *    print_rev - prints the string in reverse
 * @s: the string
 *
 * Return: noting
 */

void print_rev(char *s)
{
	int length = 0;
	int j;
	char c = *s;

		while (c != '\0')
		{
			length++;
			c = *(s + length);
		}
		for (j = length - 1; j > -1; j--)
		{
			_putchar(*(s + j));
		}
		_putchar('\n');
}



