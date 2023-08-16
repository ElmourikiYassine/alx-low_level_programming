#include <stddef.h>

/**
 * array_iterator - perform an action on a given array
 * on each element of an array.
 * @array: the array to handle
 * @size: the size of the array
 * @action: the function pointer to operate on the array
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}

