#include "main.h"
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
 * puts_half - printf form the half to the end
 * @str: the string
 *
 *  Return: noting
 */

void puts_half(char *str)
{
	int length = custom_strlen(str);
	int i, middle;

	if (length % 2 != 0)
		middle = ((length - 1) / 2) + 1;
	else
		middle = (length / 2);

	for (i = middle; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

