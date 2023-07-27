void reverse_str(char *n);
int custom_length(char *n);

/**
 * infinite_add - add as much number as you like (need to be a string)
 * @n1: integer string 1
 * @n2: integer string 2
 * @r: empty string
 * @size_r: the size of the r string
 *
 * Return: the some string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	int j = 0;
	int val1 = 0;
	int val2 = 0;
	int current = 0;
	int steps = 0;
	int overflow = 0;

	i = custom_length(n1);
	j = custom_length(n2);

	if (j >= size_r || i >= size_r)
		return (0);

	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			val1 = 0;

		else
			val1 = *(n1 + i) - '0';

		if (j < 0)
			val2 = 0;

		else
			val2 = *(n2 + j) - '0';

		current = val1 + val2 + overflow;

		if (current >= 10)
			overflow = 1;

		else
			overflow = 0;

		if (steps >= (size_r - 1))
			return (0);

		*(r + steps) = (current % 10) + '0';
		steps++;
		j--;
		i--;
	}
	if (steps == size_r)
		return (0);

	*(r + steps) = '\0';
	reverse_str(r);

	return (r);
}

/**
 * reverse_str - reverse array
 * @n: integer params
 * Return: 0
 */

void reverse_str(char *n)
{
	int i, j;
	char tmp;
	int length = custom_length(n);

	for (i = 0, j = length; i < j; i++, j--)
	{
		tmp = *(n + i);
		*(n + i) = *(n + j);
		*(n + j) = tmp;
	}
}

/**
 * custom_length - custom length
 * @n: integer params
 * Return: length
 */

int custom_length(char *n)
{
	int i = 0;

	while (*(n + i) != '\0')
	{
		i++;
	}
	return (i - 1);
}
