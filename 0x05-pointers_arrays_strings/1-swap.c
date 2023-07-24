/**
 * swap_int - swap integers
 * @a: int one
 * @b: int two
 *
 * Return: swap ints
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

