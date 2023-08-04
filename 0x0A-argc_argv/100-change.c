#include <stdio.h>
#include <stdlib.h>

/**
 * min_change - Calculates the minimum number of coins needed for change.
 * @cents: The amount in cents to make change for.
 * @coin: Index of the current coin denomination.
 * @min_coin: The minimum number of coins needed for change.
 *
 * Return: The minimum number of coins needed for the given amount of cents.
 */
int min_change(int cents, int coin, int min_coin);

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		printf("%d\n", min_change(cents, 0, 0));
	}

	return (0);
}

/**
 * min_change - Calculates the minimum number of coins needed for change.
 * @cents: The amount in cents to make change for.
 * @coin: Index of the current coin denomination.
 * @min_coin: The minimum number of coins needed for change.
 *
 * Return: The minimum number of coins needed for the given amount of cents.
 */
int min_change(int cents, int coin, int min_coin)
{
	int change[] = {25, 10, 5, 2, 1};
	int reset;

	if ((int)cents / change[coin] > 0)
	{
		min_coin += (int) cents / change[coin];
		reset = cents - ((int)(cents / change[coin]) * change[coin]);

		if (reset == 0)
			return (min_coin);

		return (min_change(reset, coin + 1, min_coin));
	}
	else if (coin < 4)
		return (min_change(cents, coin + 1, min_coin));

	return (-1);
}

