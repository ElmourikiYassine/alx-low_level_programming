#include<stdio.h>
/**
 * _strstr -  searches a string for any of a set of bytes.
 * @haystack: the string
 * @needle: the chars looking for
 *
 *  Return: a pointer to the beginning of the located substring,
 *  or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		k = i;
		j = 0;
	while (*(needle + j) != '\0' && *(haystack + k) == *(needle + j))
	{
		k++;
		j++;
	}
	if (*(needle + j) == '\0')
		return (haystack + i);
	}
	return (NULL);
}

