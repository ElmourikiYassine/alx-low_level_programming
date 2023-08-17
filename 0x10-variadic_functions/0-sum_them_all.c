#include <stdarg.h>

/**
 * sum_them_all - sum all the integers int the variadic args.
 * @n: the number of the ars.
 *
 * Return: the sum of all the optional arguments.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	if (n == 0)
		return (0);

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < (int)n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}

