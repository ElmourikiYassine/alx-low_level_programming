/**
 * is_prime_number - check if n is a prime.
 * @n: the integer to check if it's a prime.
 * @i: counter.
 *
 * Return: 1 if it is and 0 if it is not.
 */

int is_prime(int n, int i);

int is_prime_number(int n)
{
	int prime, i;

	i = n - 1;
	if (n == 0 || n == 1 || n < 0)
		return (0);

	prime =  is_prime(n, i);
	return (prime);
}

/**
 * is_prime - check if n is a prime.
 * @n: the integer to check if it's a prime.
 * @i: counter.
 *
 * Return: 1 if it is and 0 if it is not.
 */

int is_prime(int n, int i)
{

	if (i == 1)
		return (1);

	else if (n % i != 0)
		return (is_prime(n, i - 1));

	else
		return (0);
}

