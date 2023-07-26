#include "main.h"
#include <stdio.h>


int custom_strlen(const char *str);

/**
 *  _strcmp - compare lexicographicly
 * @s1: string 1
 * @s2: string 2
 *
 *  Return: the diffrece
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int length_s1 = custom_strlen(s1);

	for (i = 0; i < length_s1; i++)
	{
		if (s1[i] != s2[i])
			break;
	}
	return (s1[i] - s2[i]);
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
