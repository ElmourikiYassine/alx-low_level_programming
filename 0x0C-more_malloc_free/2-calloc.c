#include <stdlib.h>
#include <limits.h>

/**
 * _calloc - Allocates memory for an array of
 * nmemb elements of size bytes each.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element.
 *
 * Return: A pointer to the allocated memory, or NULL if nmemb or size is 0,
 *         or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/*
	 * If nmemb or size is 0, then _calloc returns NULL.
	 * The memory is set to zero.
	 * If malloc fails, then _calloc returns NULL.
	 * FYI: The standard library provides a different function:
	 * calloc. Run man calloc to learn more.
	 */

	unsigned int i;
	char *mem;
	unsigned int total_size = nmemb * size;

	if (total_size > UINT_MAX)
		exit(98);

	if (total_size == 0)
		return (NULL);

	mem  = malloc(total_size);
	if (mem == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		mem[i] = 0;

	return (mem);

}

