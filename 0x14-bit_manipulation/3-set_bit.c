#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: Pointer to the unsigned long int number.
 * @index: Index of the bit to be set.
 *
 * Return: 1 if successful, -1 if index is out of range.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* Create a mask with the bit at the given index set to 1 */
	unsigned long int mask = 1UL << index;

	/* Check if the index is out of range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Set the bit at the given index to 1 */
	*n |= mask;

	return (1);
}

