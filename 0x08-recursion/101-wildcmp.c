/**
 * wildcmp - compares two strings and returns 1
 * if the strings can be considered identical, otherwise return 0.
 * @s1: the string
 * @s2: the string
 *
 * Return: 1 if it is and 0 if it is not.
 */


int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));

		else if (*(s2 + 1) == '\0')
			return (1);

		else if (*s1 == '\0')
			return (0);

		else
			return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	else if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);

		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}

