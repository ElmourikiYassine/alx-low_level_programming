#include "main.h"
#include <stdio.h>


int custom_strlen(const char *str);

/**
 *  cap_string - capitalize the string
 * @s: string
 *
 *  Return: the string
 */
char *cap_string(char *s)
{
	int i;
	int length_s = custom_strlen(s);

	for (i = 0; i < length_s; i++)
	{
		int is_separator = 0;

		switch ((int) s[i])
		{
			case 32:
				is_separator = 1;
				break;
			case 10:
				is_separator = 1;
				break;
			case 9:
				is_separator = 1;
				s[i] = 32;
				break;
			case 46:
				is_separator = 1;
				break;
			case 44:
				is_separator = 1;
				break;
			case 33:
				is_separator = 1;
				break;
			case 63:
				is_separator = 1;
				break;
			case 34:
				is_separator = 1;
				break;
			case 40:
				is_separator = 1;
				break;
			case 41:
				is_separator = 1;
				break;
			case 123:
				is_separator = 1;
				break;
			case 125:
				is_separator = 1;
				break;
		}
		if (is_separator && s[i + 1] >= 'a' && s[i + 1] <= 'z')
		{
			s[i + 1] -= 32;
		}
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
