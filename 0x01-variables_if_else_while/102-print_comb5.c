#include <stdio.h>
/**
 * main - programme entry
 * Return: 0 if no error
 */
int main(void)
{
	int i, j, k, l;

	for (k = 0; k <= 9; k++)
	{
		for (l = 0; l <= 8; k++)
		{
			putchar('0' + k);
			putchar('0' + l);
			putchar(' ');

			for (i = l + 1; i <= 9; i++)
			{
				for (j = l + 1; j <= 9; j++)
				{
					putchar('0' + i);
					putchar('0' + j);
					if (k != 9 || l != 8 || i != 9 || j != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	

	putchar('\n');
	return (0);
}
