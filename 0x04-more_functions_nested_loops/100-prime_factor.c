#include <unistd.h>

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

/**
 * sqrt - squar root
 * @x: num to be squar rooted
 * Return: nothing
 */
double sqrt(double x)
{
	double guess = x;
	double prev_guess;
	const double epsilon = 0.000001;

	if (x < 0)
	{
	return (-1.0);
	}
	do {
	prev_guess = guess;
	guess = 0.5 * (prev_guess + x / prev_guess);
	} while (prev_guess - guess > epsilon || guess - prev_guess > epsilon);

	return (guess);
}
/**
 * sp - smallest prime
 * @n:interger
 * Return: nothing
 */

int sp(long int n)
{
	int i;

	if (n % 2 == 0)
	return (2);

	for (i = 3; i <= sqrt((double) n); i += 2)
	{
	if (n % i == 0)
	return (i);
	}
	return (n);
}
/**
 * _print_int - print integers using _putchar()
 * @n: interger
 * Return: nothing
 */

void _print_int(int n)
{
	if (n >= 10)
		_print_int(n  / 10);
	_putchar('0' + (n % 10));
}
/**
 * main - entry
 * Return: 0 success
 */

int main(void)
{
	long int n = 612852475143;
	int largest_prime = sp(n);
	long int tmp = n / largest_prime;


	while (tmp > 1)
	{
	largest_prime = sp(tmp);
	tmp /= largest_prime;
	}

	_print_int(largest_prime);
	_putchar('\n');
	return (0);
}
