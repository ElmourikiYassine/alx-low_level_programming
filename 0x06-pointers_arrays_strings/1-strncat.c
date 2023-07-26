#include "main.h"
#include <stdio.h>


int custom_strlen(const char *str);

/**
 * _strncat - concatinat the the string to the other antel n step
 * @dest: destination
 * @src: source
 * @n: the step to stop at
 *
 *  Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int length_dest = custom_strlen(dest);
	int i, j;

	for (i = length_dest, j = 0; j < n; i++, j++)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break;
	}
	return (dest);
}
/**
 * custom_strlen - the lenght
 * @str: the string
 *
 * Return: lenght
 */

int custom_strlen(const char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}
