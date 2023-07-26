#include "main.h"
#include <stdio.h>


int custom_strlen(const char *str);

/**
 *  reverse_array - reverse the array
 * @a: the array
 * @n: the size
 *
 *  Return:i nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = n - 1; i < (n - 1) / 2; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
