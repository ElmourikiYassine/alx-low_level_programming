#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max (inclusive).
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: A pointer to the newly created array, or NULL on failure.
 */
int *array_range(int min, int max)
{
	/*
	 * Prototype: int *array_range(int min, int max);
	 * The array created should contain all the values from min (included)
	 * to max (included), ordered from min to max.
	 * Return: the pointer to the newly created array.
	 * If min > max, return NULL.
	 * If malloc fails, return NULL.
	 * Compile the code this way:
	 * gcc -Wall -pedantic -Werror -Wextra
	 * -std=gnu89 3-main.c 3-array_range.c -o d
	 */

	int *array;
	int i;
	int size_array = max - min + 1;

	if (min > max)
		return (NULL);

	array = (int *)malloc(size_array * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size_array; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}

