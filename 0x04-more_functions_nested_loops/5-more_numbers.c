#include "main.h"
/**
 * more_numbers  - print form 0 to 14 using only putchar
 * Return: none
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if ((i / 10) != 0)
			_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
	}
	_putchar('\n');

}
