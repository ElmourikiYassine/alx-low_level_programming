
#include "main.h"
#include <stdio.h>


int custom_strlen(const char *str);

/**
 * _strcat - concatinat the the string to the other
 * @dest: destination
 * @src: source
 *
 *  Return: destination
 */
char *_strcat(char *dest, const char *src)
{
	int length_src = custom_strlen(src);
	int length_dest = custom_strlen(dest);
	int i, j;

	for (i = length_dest, j = 0; i <= length_src + length_dest; i++, j++)
	{
		dest[i] = src[j];
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
