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
	int i = 0;
	int j;
	char c = *s;
	
	if (c  == '\0')
		return;
	else
	{
		while (c != '\0')
		{
			i++;
			c = *(s + i);
		}
		printf("%d",i);
		for (j = i; j >= 0; j--)
		{
			_putchar(*(s + j));
		}
		_putchar('\n');
	}
}



