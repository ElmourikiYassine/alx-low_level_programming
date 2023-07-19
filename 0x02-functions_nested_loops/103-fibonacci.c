#include "main.h"

/**
 * fib  - fibonacci
 * @n: number
 *
 * Return: noting
 */


void fib(int n);
/**
 * printLongNumber - Print long number using _putchar
 * @number: number
 *
 * Return: noting
 */


void printLongNumber(long number);
/**
 * main - Entry
 *
 * Return: noting
 */

int main(void)
{
	fib(50);
	_putchar('\n');
	return (0);
}
/**
 * fib  - fibonacci
 * @n: number
 *
 * Return: noting
 */

void fib(int n)
{
	unsigned long int a = 1, b = 2, next, tmp;
	int i;

	for (i = 0; i < n; i++)
	{
		if (a < 4000000 && !(a % 2))
			tmp += a;
		next = a + b;
		a = b;
		b = next;
	}
		printLongNumber(tmp);
}
/**
 * printLongNumber - Print long number using _putchar
 * @number: number
 *
 * Return: noting
 */

void printLongNumber(long number)
{
	char buffer[20];
	int index = 0;

	if (number < 0)
	{
	_putchar('-');
	number = -number;
	}

	if (number == 0)
	{
	_putchar('0');
	return;
	}

	while (number > 0)
	{
	buffer[index++] = '0' + (number % 10);
	number /= 10;
	}

	while (index > 0)
	{
	_putchar(buffer[--index]);
	}
}
