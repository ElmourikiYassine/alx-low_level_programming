#include <stdio.h>

/**
 * main - programme entry
 * Return: 0 if no error
 */

int main(void)
{
	char i, j;

	for (j = 'a'; j <= 'z'; j++)
	{
		putchar(j);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
