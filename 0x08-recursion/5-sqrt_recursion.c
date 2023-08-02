/**
 * _sqrt_recursion - calculate the natural square root of a number.
 * @n: the integer to look for it's sqrt
 * @start: the start of the range to look into.
 * @end: the end of the range to look into.
 *
 * Return: the square root
 */
int s_root(int n, int start, int end);

int _sqrt_recursion(int n)
{
	int sqrt;

	if (n == 0 || n == 1)
		return (n);

	if (n < 0)
		return (-1);

	sqrt =  s_root(n, 0, n);
	return (sqrt);
}

/**
 * s_root - calculate the natural square root of a number.
 * @n: the integer to look for it's sqrt
 * @start: the start of the range to look into.
 * @end: the end of the range to look into.
 *
 * Return: the square root
 */

int s_root(int n, int start, int end)
{
	long int mid;

	if (start > end)
		return (-1);

	mid = (end + start) / 2;
	if ((mid * mid) == n)
		return (mid);

	else if ((mid * mid) > n)
		return (s_root(n, start, mid - 1));

	else
		return (s_root(n, mid + 1, end));
}

