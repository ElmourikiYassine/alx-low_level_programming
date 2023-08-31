#include <stdio.h>

/**
 * get_endianness - Checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	char *string = "YA";

	if (string[0] > string[1])
		return (1);
	else
		return (0);
}

