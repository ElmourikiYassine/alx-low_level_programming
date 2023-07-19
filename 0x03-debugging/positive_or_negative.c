#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - The Entry
 * Return: 0 if success , 1 if not
 */

int positive_or_negative(int n)
{

	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	return (0);
}
