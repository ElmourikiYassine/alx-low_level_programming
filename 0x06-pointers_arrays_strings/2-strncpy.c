#include "main.h"
#include <stdio.h>


int custom_strlen(const char *str);

/**
 * _strncpy - concatinat the the string to the other antel n step
 * @dest: destination
 * @src: source
 * @n: the step to stop at
 *
 *  Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
/**
 * custom_strlen - the length
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
