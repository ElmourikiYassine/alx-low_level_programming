#include "main.h"


int custom_strlen(const char *str);

/**
 *  string_toupper - turn small to uppercase
 * @s: string
 *
 *  Return: the string
 */
char *string_toupper(char *s)
{
	int i;
	int length_s = custom_strlen(s);

	for (i = 0; i < length_s; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = (s[i] - 32);
	}
	return (s);
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
