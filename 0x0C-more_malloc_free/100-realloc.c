#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block.
 * @ptr: Pointer to the memory block to be reallocated.
 * @old_size: Size of the old memory block.
 * @new_size: Size of the new memory block.
 *
 * Return: Pointer to the reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
		char *old = (char *)ptr;
		char *mem;
		unsigned int i;

		/* If new size is the same as old size, no need to reallocate */
		if (new_size == old_size)
			return (ptr);
		/* If ptr is NULL, allocate new memory and return */
		if (ptr == NULL)
		{
			mem = malloc(new_size);
			if (mem == NULL)
				return (NULL);
			return (mem);
		}
		/* If new size is 0, free memory and return NULL */
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		/* If new size is smaller, allocate new memory, copy data, and return */
		if (new_size < old_size)
		{
			mem = malloc(new_size);
			if (mem == NULL)
				return (NULL);
			for (i = 0; i < new_size; i++)
				mem[i] = old[i];
			return (mem);
		}
		/* Allocate new memory, copy data, and return */

		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
			mem[i] = old[i];
		free(ptr); /* Free the old memory block */
		return (mem);
}

