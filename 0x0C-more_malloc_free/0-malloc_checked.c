#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, the function exits with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL || b >= INT_MAX)
		exit(98);
	else
		return (mem);
}
