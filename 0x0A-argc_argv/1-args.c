#include "main.h"
#include <unistd.h>
/**
 * main - check the code
 * @argc: number of argument supplied to the programme.
 * @argv: argument supplied to the programme.
 *
 * Return: Always 0.
 */


int main(int argc, char __attribute__((unused)) *argv[])
{
	_putchar((argc - 1) + '0');
	_putchar('\n');
	return (0);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
