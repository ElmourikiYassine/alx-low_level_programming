/**
 * _pow_recursion - calculate the value of x raised to the power of y.
 * @x: the base.
 * @y: the power.
 *
 * Return: x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	int i;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	i = x * _pow_recursion(x, y - 1);
	return (i);
}

