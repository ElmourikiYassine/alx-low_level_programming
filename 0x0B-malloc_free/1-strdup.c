#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * containing a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if it fails.
 */
char *_strdup(char *str)
{
	int i, count = 0;
	char *string;
	char *s = str;

	/* Check if the the str is null */
	if (str == NULL)
		return (NULL);

	/* Count the number of characters in the input string */
	while (s[count] != '\0')
		count++;

	/* Allocate memory for the duplicated string */
	string = (char *)malloc((count + 1) * sizeof(char));

	if (string == NULL)
		return (NULL);

	if (*str == '\0')
	{
		*string = '\0';
		return (string);
	}

	/* Copy the characters from the input string to the duplicated string */
	for (i = 0; i < count; i++)
		string[i] = str[i];

	string[count] = '\0'; /* Null-terminate the duplicated string */

	return (string);
}

