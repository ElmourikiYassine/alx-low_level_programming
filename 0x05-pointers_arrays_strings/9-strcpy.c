#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy the the string to the other
 * @str: the string
 *
 *  Return: noting
 */

int custom_strlen(const char *str);

char *_strcpy(char *dest, const char *src)
{
	int length = custom_strlen(src);
	int i;

	for (i = 0; i <= length; i++)
	{
		*(dest + i) = *(src + i);
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
