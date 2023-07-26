#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13.
 * @s: pointer to string params
 *
 * Return: the string
 */

char *rot13(char *s)
{
	int i;
	int j;
	char array[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arrayrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == array[j])
			{
				s[i] = arrayrot[j];
				break;
			}
		}
	}
	return (s);
}

