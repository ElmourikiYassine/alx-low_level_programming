#include <stdio.h>
/**
 * _strchr - point to the char specified
 * @s: the string to look in
 * @c: the char to look for
 *
 *  Return: the pointer to the char or NULL if not found
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
