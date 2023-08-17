#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the char to separate between numbers.
 * @n: the number of optional arguments.
 *
 * Return: the sum of all the optional arguments.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);

	for (i = 0; i < (int)n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator && i != (int)(n - 1))
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}

