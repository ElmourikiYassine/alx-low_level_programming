#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Concatenates n characters from s2 to s1
 * @s1: The first string
 * @s2: The second string
 * @n: Number of characters to concatenate from s2
 *
 * Return: A pointer to the concatenated string (s1 + n characters from s2),
 *         or NULL if memory allocation fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size1, size2;
	char *string;

	size1 = 0;
	size2 = 0;

	if (s1 == NULL)
		size1 = 0;
	else
		for (i = 0; s1[i] != '\0'; i++)
			size1++;

	if (s2 == NULL)
		size2 = 0;
	else
		for (j = 0; s2[j] != '\0'; j++)
			size2++;

	if (n > size2)
		n = size2;

	string = (char *) malloc((size1 + n + 1) * sizeof(char));

	if (string == NULL)
		return (NULL);

	if (s1 != NULL)
		for (i = 0; i < size1; i++)
			string[i] = s1[i];


	if (s2 != NULL)
		for (j = size1, i = 0; i < n; i++, j++)
			string[j] = s2[i];

	string[size1 + n] = '\0';

	return (string);
}

