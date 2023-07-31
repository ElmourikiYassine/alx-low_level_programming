#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard.
 * @a: a as pointer to array 8 of char
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
