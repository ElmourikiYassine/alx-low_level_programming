#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
/**
 *  charToInt - turn a char to an int
 * @c: the char
 *
 * Return: noting
 */
int charToInt(char c)
{
	return (c - '0');
}
/**
 *  _pow - calculate the power
 * @a: the the base
 * @b: the power
 *
 * Return: noting
 */
int _pow(int a, int b)
{
	int i, result;

	if (b == 0)
		return (1);
	else if (b == 1)
		return (a);
	result = a;
	for (i = 1; i < b; i++)
		result *= a;
	return (result);
}
/**
 *  _atoi - compare the number of (-) (+) up to a number,
 *  and assigne it after converting it to an integer
 * @s: the string
 *
 * Return: noting
 */
int _atoi(char *s)
{
	int length = custom_strlen(s);

	int i, j, index, signe;
	unsigned int result;
	int *xtrac_num = (int *) malloc(sizeof(int) * length);

	index = 0;
	result = 0;
	signe = 1;

	for (i = 0; i <= length; i++)
	{
		if (*(s + i) == '-')
		{
			signe *= -1;
		}
		if ((int)*(s + i) <= 57 && (int)*(s + i) >= 48)
		{
			xtrac_num[index++] =  charToInt(s[i]);
			if ((int)*(s + i + 1) >  57 || (int)*(s + i + 1) <  48)
				break;
		}
	}
	for (j = 0; j < index; j++)
	{
		result += xtrac_num[j] * _pow(10, index - j - 1);
	}
		result = (unsigned int) signe * result;

	free(xtrac_num);
	return (result);
}

