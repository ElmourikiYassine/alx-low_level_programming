#include<stdio.h>
/**
 * _strspn - find occurences of accept chars in s
 * @s: the string
 * @accept: the chars looking for
 *
 *  Return: the number of occurences
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				break;
		}
		if (*(accept + j) == '\0')
			break;
	}
	return (i);
}


