/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: the string.
 *
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);

	i = _strlen_recursion(s + 1);
	return (i + 1);
}

