#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point
 * Return: 1 an error occurred if 0 everything ok
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int un;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	un = n % 10;
	if (un > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, un);
	else if (un == 0)
		printf("Last digit of %d is %d and is 0\n", n, un);
	else if (un < 6 && un != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, un);
	return (0);
}
