#include "main.h"
/**
  * main - entry
  * Return: 0 everything is ok
  *
  *
  */

int main(void)
{
	char str[9] = "_putchar\n";
	int i;
	int lenght = sizeof(str) / sizeof(char);

	for (i = 0; i < lenght; i++)
	{
		_putchar(str[i]);
	}
	return (0);
}
