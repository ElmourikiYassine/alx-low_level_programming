#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0;
	int size2 = 0;
	int i, j;
	char *new_string;

	if (s1 == NULL && s2 == NULL)
	{
		new_string = (char *)malloc(1);
		if (new_string == NULL)
			return (NULL);
		*new_string = '\0';
		return (new_string);
	}

	if (s1 != NULL)
		while (s1[size1] != '\0')
			size1++;

	if (s2 != NULL)
		while (s2[size2] != '\0')
			size2++;

	new_string = (char *)malloc((size1 + size2 + 1) * sizeof(char));

	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		new_string[i] = s1[i];

	for (i = size1, j = 0; j < size2; i++, j++)
		new_string[i] = s2[j];

	new_string[size1 + size2] = '\0'; /* Null-terminate the concatenated string */

	return (new_string);
}

