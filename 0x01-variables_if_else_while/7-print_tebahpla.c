#include <stdio.h>

/**
 * main - programme entry
 * Return: 0 if no error
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
