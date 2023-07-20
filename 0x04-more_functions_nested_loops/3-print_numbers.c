#include "main.h"
/**
 * print_numbers  - print form 0 to 9
 * Return: return 1 if true 0 if not
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}
