#include <stdio.h>

/**
 * main - programme entry
 * Return: 0 if no error
 */

int main(void)
{
	int  i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');

		}
		}
	putchar('\n');
	return (0);
}
