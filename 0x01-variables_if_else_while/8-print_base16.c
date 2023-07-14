#include <stdio.h>

/**
 * main - programme entry
 * Return: 0 if no error
 */

int main(void)
{
	char i, j;

	for (j = 48; j <= 57; j++)
	{
		putchar(j);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
