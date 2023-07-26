#include "main.h"
#include <stdio.h>


int custom_strlen(const char *str);

/**
 *  leet - Letters a and A should be replaced by 4
 *	   Letters e and E should be replaced by 3
 *	   Letters o and O should be replaced by 0
 *	   Letters t and T should be replaced by 7
 *	   Letters l and L should be replaced by 1
 * @s: string
 *
 *  Return: encoded string
 */
char *leet(char *s)
{
	int i, j;
	int length_s = custom_strlen(s);
	char check[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replace[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; i < length_s; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == check[j])
			{
				s[i] = replace[j];
				break;
			}
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
