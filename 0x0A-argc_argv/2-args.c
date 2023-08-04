#include "main.h"
#include <unistd.h>
/**
 * main - check the code
 * @str: the string
 *
 * Return: Always 0.
 */

void _puts(char *str);

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		_puts(argv[i]);
	}
	return (0);
}

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

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
