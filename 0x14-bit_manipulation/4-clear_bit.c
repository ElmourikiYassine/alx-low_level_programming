#include "main.h"

/**
 * clear_bit - Clears a bit at a specific index
 * @n: Pointer to the number
 * @index: The index of the bit to clear
 *
 * Return: 1 on success, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if ((*n & mask) != 0)
		*n ^= mask;

	return (1);
}

