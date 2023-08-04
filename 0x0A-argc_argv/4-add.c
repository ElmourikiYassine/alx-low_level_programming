#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, n;

	if (argc == 1)
		n = 0;
	for (i = 1; i < argc; i++)
	{
		if (_atoi(argv[i]) == 0 && argv[i][0] != '0')
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
		{
			n += _atoi(argv[i]);
		}
	}
	printf("%d\n", n);

	return (0);
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
	int i, j, index, signe;
	unsigned int result;
	int *xtrac_num;
	int length = 0;
	char *str = s;

	index = 0;
	result = 0;
	signe = 1;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	xtrac_num = (int *) malloc(sizeof(int) * length);

	for (i = 0; i <= length; i++)
	{
		if (*(s + i) == '-')
		{
			signe *= -1;
		}
		if ((int)*(s + i) <= 57 && (int)*(s + i) >= 48)
		{
			xtrac_num[index++] =  (s[i] - '0');
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

