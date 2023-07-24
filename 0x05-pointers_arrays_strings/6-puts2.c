#include "main.h"
#include <stdlib.h>
/**
 *  custom_strlen - the lenght
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
 *  puts2 - print every other char
 * @str: the string
 *
 * Return: noting
 */

void puts2(char *str)
{
	int length = custom_strlen(str);
	int i;

	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}

