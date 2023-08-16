/**
 * int_index - perform an a search based on cmp function pointer
 * @array: the array to handle
 * @size: the size of the array
 * @cmp: the comparison function that dictate the condtion
 *        on which we return the result
 *
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}

