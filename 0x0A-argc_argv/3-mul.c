#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * main - check the code
 * @str: the string
 *
 * Return: Always 0.
 */

void _puts(char *str);
int _atoi(char *s);
void print_number(int n);

int main(int argc, char *argv[])
{

	int i, j, n;
	unsigned int mod = 10;

	if (argc <= 1)
	{
		_puts("Error");
		return (1);
	}
	n = _atoi(argv[1]) * _atoi(argv[2]);

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while ((unsigned int) n % mod != (unsigned int) n)
	{
		i++;
		mod *= 10;
	}

	for (j = 0; j <= i; j++)
	{
		mod /= 10;
		if (mod != 0)
			_putchar((n / mod) % 10 + '0');
	}
	_putchar('\n');

	return (0);
}

/**
 *   _puts - prints the string
 * @str: the string
 *
 * Return: noting
 */


void _puts(char *str)
{
	int i = 0;
	int j;
	char c = *str;

	while (c != '\0')
	{
		i++;
		c = *(str + i);
	}
	for (j = 0; j < i; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
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

