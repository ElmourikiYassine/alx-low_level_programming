#include<stdio.h>
/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s: the string
 * @accept: the chars looking for
 *
 *  Return: the number of occurences
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}

