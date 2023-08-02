/**
 * factorial - function that returns the factorial of a given number.
 * @n: the number to calculate the factorial for.
 *
 * Return: the factorial
 */

int factorial(int n)
{
	int i;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	i = n * factorial(n - 1);
	return (i);
}

