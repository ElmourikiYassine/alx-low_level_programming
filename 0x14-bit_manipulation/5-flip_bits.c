#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flip
 * to transform one number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 1UL;
	unsigned long int XOR_product = n ^ m;
	unsigned long int XOR_count = XOR_product;
	int count = 0;

	while (XOR_count != 0)
	{
		if (XOR_product & mask)
			count++;

		mask <<= 1;
		XOR_count >>= 1;
	}
	return (count);
}

