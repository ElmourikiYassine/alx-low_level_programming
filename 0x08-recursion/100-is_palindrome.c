/**
 * is_palindrome - function that returns 1
 * if a string is a palindrome and 0 if not.
 * @s: the string
 *
 * Return: 1 if it is and 0 if it is not.
 */

char *end_of_string(char *s);

int palindrome(char *s, char *bs);


int is_palindrome(char *s)
{
	char *bs = end_of_string(s);

	if (*s == '\0')
		return (0);

	return (palindrome(s, bs));
}

/**
 * end_of_string - point to the end of the string
 * @s: the string
 *
 * Return: the end of the string.
 */

char *end_of_string(char *s)
{
	if (*s == '\0')
		return (s - 1);

	return (end_of_string(s + 1));
}

/**
 * palindrome - check if n is a prime.
 * @s: the string
 * @bs: the end of the string.
 *
 * Return: 1 if it is and 0 if it is not.
 */

int palindrome(char *s, char *bs)
{
	if (*s != *bs)
		return (0);
	if (*s == '\0' || *bs == '\0')
		return (1);

	if (*s == *bs)
		return (palindrome(s + 1, bs - 1));
	return (-1);
}

